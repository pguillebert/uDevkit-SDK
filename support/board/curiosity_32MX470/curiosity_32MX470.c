/**
 * @file curiosity_32MX470.c
 * @author Sebastien CAUX (sebcaux)
 * @copyright Robotips 2017
 *
 * @date July 25, 2017, 11:20 AM
 *
 * @brief Code for Curiosity 32MX470 board (DM320103)
 * 
 * product page:
 *  http://www.microchip.com/Developmenttools/ProductDetails.aspx?PartNO=DM320103
 * datasheet:
 *  http://ww1.microchip.com/downloads/en/DeviceDoc/70005283B.pdf
 */

#include "curiosity_32MX470.h"

#include "driver/sysclock.h"
#include "driver/gpio.h"

rt_dev_t board_leds[LED_COUNT];
rt_dev_t board_buttons[BUTTON_COUNT];

int board_init_io()
{
#ifndef SIMULATOR
    // analog inputs
    ANSELB = 0x0000;         // all analog inputs of port B as digital buffer
    ANSELD = 0x0000;         // all analog inputs of port D as digital buffer
    ANSELE = 0x0000;         // all analog inputs of port E as digital buffer
    ANSELG = 0x0000;         // all analog inputs of port G as digital buffer

    TRISEbits.TRISE4 = 0;    // LED1
    TRISEbits.TRISE6 = 0;    // LED2
    TRISEbits.TRISE7 = 0;    // LED3
#endif

    board_leds[0] = gpio_pin(GPIO_PORTE, 4);
    gpio_setBitConfig(board_leds[0], GPIO_OUTPUT);
    board_leds[1] = gpio_pin(GPIO_PORTE, 6);
    gpio_setBitConfig(board_leds[1], GPIO_OUTPUT);
    board_leds[2] = gpio_pin(GPIO_PORTE, 7);
    gpio_setBitConfig(board_leds[2], GPIO_OUTPUT);

    board_buttons[0] = gpio_pin(GPIO_PORTD, 6);
    gpio_setBitConfig(board_buttons[0], GPIO_INPUT);

    return 0;
}

int board_init()
{
    sysclock_setSourceFreq(SYSCLOCK_SRC_POSC, 20000000); // 20MHz
    archi_init();

    board_init_io();

    return 0;
}

int board_setLed(uint8_t led, uint8_t state)
{
    if(led >= LED_COUNT)
        return -1;

    if (state & 1)
        gpio_setBit(board_leds[led]);
    else
        gpio_clearBit(board_leds[led]);
    return 0;
}

int board_toggleLed(uint8_t led, uint8_t state)
{
    int value = GPIO_HIGH;
    if(led >= LED_COUNT)
        return -1;

    gpio_toggleBit(board_leds[led]);
    return 0;
}

int8_t board_getLed(uint8_t led)
{
    if(led >= LED_COUNT)
        return -1;

    return gpio_readBit(board_leds[led]);
}

int8_t board_getButton(uint8_t button)
{
    GPIO_VALUE value;
    if(button >= BUTTON_COUNT)
        return -1;

    value = gpio_readBit(board_buttons[button]);
    if (value == GPIO_HIGH)
        return 0;
    return 1;
}
