/**
 * @file i2c_pic24_dspic30_dspic33.c
 * @author Sebastien CAUX (sebcaux)
 * @copyright Robotips 2016
 *
 * @date March 01, 2016, 19:10 PM
 * 
 * @brief I2C communication support driver for PIC32MM, PIC32MK, PIC32MX,
 * PIC32MZDA, PIC32MZEC and PIC32MZEF
 */

#include "i2c.h"

#include "driver/sysclock.h"

#include <xc.h>

#if !defined (I2C_COUNT) || I2C_COUNT==0
  #warning "No i2c bus on the current device or unknow device"
#endif

#define I2C_FLAG_UNUSED  0x00
typedef struct {
    union {
        struct {
            unsigned used : 1;
            unsigned enabled : 1;
            unsigned addrW10 : 1;
            unsigned : 5;
        };
        uint8_t val;
    };
} i2c_status;

struct i2c_dev
{
    uint32_t baudSpeed;
    i2c_status flags;
};

struct i2c_dev i2cs[] = {
    {
        .baudSpeed = 0,
        .flags = {{.val = I2C_FLAG_UNUSED}}
    },
#if I2C_COUNT>=2
    {
        .baudSpeed = 0,
        .flags = {{.val = I2C_FLAG_UNUSED}}
    },
#endif
#if I2C_COUNT>=3
    {
        .baudSpeed = 0,
        .flags = {{.val = I2C_FLAG_UNUSED}}
    },
#endif
#if I2C_COUNT>=4
    {
        .baudSpeed = 0,
        .flags = {{.val = I2C_FLAG_UNUSED}}
    },
#endif
#if I2C_COUNT>=5
    {
        .baudSpeed = 0,
        .flags = {{.val = I2C_FLAG_UNUSED}}
    },
#endif
};

/**
 * @brief Gives a free i2c bus device number
 * @return i2c bus device number
 */
rt_dev_t i2c_getFreeDevice()
{
    uint8_t i;

    for (i = 0; i < I2C_COUNT; i++)
        if (i2cs[i].flags.val == I2C_FLAG_UNUSED)
            break;

    if (i == I2C_COUNT)
        return NULLDEV;

    i2cs[i].flags.used = 1;

    return MKDEV(DEV_CLASS_I2C, i);
}

/**
 * @brief Release an i2c bus device
 * @param device i2c bus device number
 */
void i2c_releaseDevice(rt_dev_t device)
{
    uint8_t i2c = MINOR(device);
    if (i2c >= I2C_COUNT)
        return;

    i2cs[i2c].flags.val = I2C_FLAG_UNUSED;
}

/**
 * @brief Enable the specified i2c bus device
 * @param device i2c bus device number
 * @return 0 if ok, -1 in case of error
 */
int i2c_enable(rt_dev_t device)
{
    uint8_t i2c = MINOR(device);
    if (i2c >= I2C_COUNT)
        return -1;

    i2cs[i2c].flags.enabled = 1;

    switch (i2c)
    {
#ifdef I2C_NUM1
    case I2C_NUM1:
        I2C1CONbits.I2CEN = 1;  // enable i2c module
        break;
#endif
#ifdef I2C_NUM2
    case I2C_NUM2:
        I2C2CONbits.I2CEN = 1;  // enable i2c module
        break;
#endif
#ifdef I2C_NUM3
    case I2C_NUM3:
        I2C3CONbits.I2CEN = 1;  // enable i2c module
        break;
#endif
#ifdef I2C_NUM4
    case I2C_NUM4:
        I2C4CONbits.I2CEN = 1;  // enable i2c module
        break;
#endif
#ifdef I2C_NUM5
    case I2C_NUM5:
        I2C5CONbits.I2CEN = 1;  // enable i2c module
        break;
#endif
    }

    return 0;
}

/**
 * @brief Disable the specified i2c bus device
 * @param device i2c bus device number
 * @return 0 if ok, -1 in case of error
 */
int i2c_disable(rt_dev_t device)
{
    uint8_t i2c = MINOR(device);
    if (i2c >= I2C_COUNT)
        return -1;

    i2cs[i2c].flags.enabled = 0;

    switch (i2c)
    {
#ifdef I2C_NUM1
    case I2C_NUM1:
        I2C1CONbits.I2CEN = 0;  // disable i2c
        IEC3bits.I2C1MIE = 0;   // disable i2c master interrupt
        break;
#endif
#ifdef I2C_NUM2
    case I2C_NUM2:
        I2C2CONbits.I2CEN = 0;  // disable i2c
        IEC4bits.I2C5MIE = 0;   // disable i2c master interrupt
        break;
#endif
#ifdef I2C_NUM3
    case I2C_NUM3:
        I2C3CONbits.I2CEN = 0;  // disable i2c
        IEC5bits.I2C3MIE = 0;   // disable i2c master interrupt
        break;
#endif
#ifdef I2C_NUM4
    case I2C_NUM4:
        I2C4CONbits.I2CEN = 0;  // disable i2c
        IEC5bits.I2C4MIE = 0;   // disable i2c master interrupt
        break;
#endif
#ifdef I2C_NUM5
    case I2C_NUM5:
        I2C5CONbits.I2CEN = 0;  // disable i2c
        IEC5bits.I2C5MIE = 0;   // disable i2c master interrupt
        break;
#endif
    }

    return 0;
}

/**
 * @brief Sets the speed of receive and transmit of the specified i2c bus device
 * @param device i2c bus device number
 * @param baudSpeed speed of receive and transmit in bauds (bits / s)
 * @return 0 if ok, -1 in case of error
 */
int i2c_setBaudSpeed(rt_dev_t device, uint32_t baudSpeed)
{
    uint32_t systemClockPeriph;
    uint16_t uBrg;

    uint8_t i2c = MINOR(device);
    if (i2c >= I2C_COUNT)
        return -1;

    if (baudSpeed == 0)
        return -1;

    i2cs[i2c].baudSpeed = baudSpeed;

    systemClockPeriph = sysclock_getPeriphClock();
    uBrg = (systemClockPeriph / baudSpeed) - (systemClockPeriph / I2C_FPGD) - 2;

    if (uBrg <= 1)
        uBrg = 2;

    switch (i2c)
    {
#ifdef I2C_NUM1
    case I2C_NUM1:
        I2C1BRG = uBrg;
        break;
#endif
#ifdef I2C_NUM2
    case I2C_NUM2:
        I2C2BRG = uBrg;
        break;
#endif
#ifdef I2C_NUM3
    case I2C_NUM3:
        I2C3BRG = uBrg;
        break;
#endif
#ifdef I2C_NUM4
    case I2C_NUM4:
        I2C4BRG = uBrg;
        break;
#endif
#ifdef I2C_NUM5
    case I2C_NUM5:
        I2C5BRG = uBrg;
        break;
#endif
    }

    return 0;
}


/**
 * @brief Gets the true baud speed of the specified i2c bus device
 * @param device i2c bus device number
 * @return speed of receive and transmit in bauds (bits / s)
 */
uint32_t i2c_baudSpeed(rt_dev_t device)
{
    uint32_t baudSpeed, systemClockPeriph;
    uint16_t uBrg;

    uint8_t i2c = MINOR(device);
    if (i2c >= I2C_COUNT)
        return 0;

    switch (i2c)
    {
#ifdef I2C_NUM1
    case I2C_NUM1:
        uBrg = I2C1BRG;
        break;
#endif
#ifdef I2C_NUM2
    case I2C_NUM2:
        uBrg = I2C2BRG;
        break;
#endif
#ifdef I2C_NUM3
    case I2C_NUM3:
        uBrg = I2C3BRG;
        break;
#endif
#ifdef I2C_NUM4
    case I2C_NUM4:
        uBrg = I2C4BRG;
        break;
#endif
#ifdef I2C_NUM5
    case I2C_NUM5:
        uBrg = I2C5BRG;
        break;
#endif
    }

    systemClockPeriph = sysclock_getPeriphClock();
    baudSpeed = systemClockPeriph / (uBrg + 2); // TODO add PGD period to be exact

    return baudSpeed;
}

/**
 * @brief Gets the effective baud speed of the specified i2c bus device
 * @param device i2c bus device number
 * @return speed of receive and transmit in bauds (bits / s)
 */
uint32_t i2c_effectiveBaudSpeed(rt_dev_t device)
{
    uint8_t i2c = MINOR(device);
    if (i2c >= I2C_COUNT)
        return 0;

    return i2cs[i2c].baudSpeed;
}

/**
 * @brief Sets the address width of slaves of the specified i2c bus device
 * @param device i2c bus device number
 * @return 0 if ok, -1 in case of error
 */
int i2c_setAddressWidth(rt_dev_t device, uint8_t addressWidth)
{
    uint8_t addrW10;
    uint8_t i2c = MINOR(device);
    if (i2c >= I2C_COUNT)
        return 0;

    if (addressWidth == 7)
        addrW10 = 0;
    else if (addressWidth == 10)
        addrW10 = 1;
    else
        return -1;

    i2cs[i2c].flags.addrW10 = addrW10;

    switch (i2c)
    {
#ifdef I2C_NUM1
    case I2C_NUM1:
        I2C1CONbits.A10M = addrW10;
        break;
#endif
#ifdef I2C_NUM2
    case I2C_NUM2:
        I2C2CONbits.A10M = addrW10;
        break;
#endif
#ifdef I2C_NUM3
    case I2C_NUM3:
        I2C3CONbits.A10M = addrW10;
        break;
#endif
#ifdef I2C_NUM4
    case I2C_NUM4:
        I2C4CONbits.A10M = addrW10;
        break;
#endif
#ifdef I2C_NUM5
    case I2C_NUM5:
        I2C5CONbits.A10M = addrW10;
        break;
#endif
    }

    return 0;
}

/**
 * @brief Gets the address width of slaves of the specified i2c bus device
 * @param device i2c bus device number
 * @return speed of receive and transmit in bauds (bits / s)
 */
uint8_t i2c_addressWidth(rt_dev_t device)
{
    uint8_t i2c = MINOR(device);
    if (i2c >= I2C_COUNT)
        return -1;

    if (i2cs[i2c].flags.addrW10 == 1)
        return 10;
    else
        return 7;
}

/**
 * @brief Sends a start condition on the specified i2c bus device
 * @param device i2c bus device number
 * @return 0 if ok, -1 in case of error
 */
int i2c_start(rt_dev_t device)
{
    uint8_t i2c = MINOR(device);
    if (i2c >= I2C_COUNT)
        return 0;

    switch (i2c)
    {
#ifdef I2C_NUM1
    case I2C_NUM1:
        I2C1CONbits.SEN = 1;
        while (I2C1CONbits.SEN);
        break;
#endif
#ifdef I2C_NUM2
    case I2C_NUM2:
        I2C2CONbits.SEN = 1;
        while (I2C2CONbits.SEN);
        break;
#endif
#ifdef I2C_NUM3
    case I2C_NUM3:
        I2C3CONbits.SEN = 1;
        while (I2C3CONbits.SEN);
        break;
#endif
#ifdef I2C_NUM4
    case I2C_NUM4:
        I2C4CONbits.SEN = 1;
        while (I2C4CONbits.SEN);
        break;
#endif
#ifdef I2C_NUM5
    case I2C_NUM5:
        I2C5CONbits.SEN = 1;
        while (I2C5CONbits.SEN);
        break;
#endif
    }

    return 0;
}

/**
 * @brief Sends a restart condition on the specified i2c bus device
 * @param device i2c bus device number
 * @return 0 if ok, -1 in case of error
 */
int i2c_restart(rt_dev_t device)
{
    uint8_t i2c = MINOR(device);
    if (i2c >= I2C_COUNT)
        return 0;

    switch (i2c)
    {
#ifdef I2C_NUM1
    case I2C_NUM1:
        I2C1CONbits.RSEN = 1;
        while (I2C1CONbits.RSEN);
        break;
#endif
#ifdef I2C_NUM2
    case I2C_NUM2:
        I2C2CONbits.RSEN = 1;
        while (I2C2CONbits.RSEN);
        break;
#endif
#ifdef I2C_NUM3
    case I2C_NUM3:
        I2C3CONbits.RSEN = 1;
        while (I2C3CONbits.RSEN);
        break;
#endif
#ifdef I2C_NUM4
    case I2C_NUM4:
        I2C4CONbits.RSEN = 1;
        while (I2C4CONbits.RSEN);
        break;
#endif
#ifdef I2C_NUM5
    case I2C_NUM5:
        I2C5CONbits.RSEN = 1;
        while (I2C5CONbits.RSEN);
        break;
#endif
    }

    return 0;
}

/**
 * @brief Sends a stop condition on the specified i2c bus device
 * @param device i2c bus device number
 * @return 0 if ok, -1 in case of error
 */
int i2c_stop(rt_dev_t device)
{
    uint8_t i2c = MINOR(device);
    if (i2c >= I2C_COUNT)
        return 0;

    switch (i2c)
    {
#ifdef I2C_NUM1
    case I2C_NUM1:
        I2C1CONbits.PEN = 1;
        while (I2C1CONbits.PEN);
        break;
#endif
#ifdef I2C_NUM2
    case I2C_NUM2:
        I2C2CONbits.PEN = 1;
        while (I2C2CONbits.PEN);
        break;
#endif
#ifdef I2C_NUM3
    case I2C_NUM3:
        I2C3CONbits.PEN = 1;
        while (I2C3CONbits.PEN);
        break;
#endif
#ifdef I2C_NUM4
    case I2C_NUM4:
        I2C4CONbits.PEN = 1;
        while (I2C4CONbits.PEN);
        break;
#endif
#ifdef I2C_NUM5
    case I2C_NUM5:
        I2C5CONbits.PEN = 1;
        while (I2C5CONbits.PEN);
        break;
#endif
    }

    return 0;
}

/**
 * @brief Waits until start, restart, stop, receive, transmit or ack condition finish
 * @param device i2c bus device number
 * @return 0 if ok, -1 in case of error
 */
int i2c_idle(rt_dev_t device)
{
    uint8_t i2c = MINOR(device);
    if (i2c >= I2C_COUNT)
        return 0;

    switch (i2c)
    {
#ifdef I2C_NUM1
    case I2C_NUM1:
        while (I2C1CONbits.SEN || I2C1CONbits.PEN || I2C1CONbits.RCEN ||
          I2C1CONbits.RSEN || I2C1CONbits.ACKEN || I2C1STATbits.TRSTAT);
        break;
#endif
#ifdef I2C_NUM2
    case I2C_NUM2:
        while (I2C2CONbits.SEN || I2C2CONbits.PEN || I2C2CONbits.RCEN ||
          I2C2CONbits.RSEN || I2C2CONbits.ACKEN || I2C2STATbits.TRSTAT);
        break;
#endif
#ifdef I2C_NUM3
    case I2C_NUM3:
        while (I2C3CONbits.SEN || I2C3CONbits.PEN || I2C3CONbits.RCEN ||
          I2C3CONbits.RSEN || I2C3CONbits.ACKEN || I2C3STATbits.TRSTAT);
        break;
#endif
#ifdef I2C_NUM4
    case I2C_NUM4:
        while (I2C4CONbits.SEN || I2C4CONbits.PEN || I2C4CONbits.RCEN ||
          I2C4CONbits.RSEN || I2C4CONbits.ACKEN || I2C4STATbits.TRSTAT);
        break;
#endif
#ifdef I2C_NUM5
    case I2C_NUM5:
        while (I2C5CONbits.SEN || I2C5CONbits.PEN || I2C5CONbits.RCEN ||
          I2C5CONbits.RSEN || I2C5CONbits.ACKEN || I2C5STATbits.TRSTAT);
        break;
#endif
    }

    return 0;
}

/**
 * @brief Generates acknowledge condition on the specified i2c bus device
 * @param device i2c bus device number
 * @return 0 if ok, -1 in case of error
 */
int i2c_ack(rt_dev_t device)
{
    uint8_t i2c = MINOR(device);
    if (i2c >= I2C_COUNT)
        return 0;

    switch (i2c)
    {
#ifdef I2C_NUM1
    case I2C_NUM1:
        I2C1CONbits.ACKDT = 0;
        I2C1CONbits.ACKEN = 1;
        while (I2C1CONbits.ACKEN);
        break;
#endif
#ifdef I2C_NUM2
    case I2C_NUM2:
        I2C2CONbits.ACKDT = 0;
        I2C2CONbits.ACKEN = 1;
        while (I2C2CONbits.ACKEN);
        break;
#endif
#ifdef I2C_NUM3
    case I2C_NUM3:
        I2C3CONbits.ACKDT = 0;
        I2C3CONbits.ACKEN = 1;
        while (I2C3CONbits.ACKEN);
        break;
#endif
#ifdef I2C_NUM4
    case I2C_NUM4:
        I2C4CONbits.ACKDT = 0;
        I2C4CONbits.ACKEN = 1;
        while (I2C4CONbits.ACKEN);
        break;
#endif
#ifdef I2C_NUM5
    case I2C_NUM5:
        I2C5CONbits.ACKDT = 0;
        I2C5CONbits.ACKEN = 1;
        while (I2C5CONbits.ACKEN);
        break;
#endif
    }

    return 0;
}

/**
 * @brief Generates not acknowledge condition on the specified i2c bus device
 * @param device i2c bus device number
 * @return 0 if ok, -1 in case of error
 */
int i2c_nack(rt_dev_t device)
{
    uint8_t i2c = MINOR(device);
    if (i2c >= I2C_COUNT)
        return 0;

    switch (i2c)
    {
#ifdef I2C_NUM1
    case I2C_NUM1:
        I2C1CONbits.ACKDT = 1;
        I2C1CONbits.ACKEN = 1;
        while (I2C1CONbits.ACKEN);
        break;
#endif
#ifdef I2C_NUM2
    case I2C_NUM2:
        I2C2CONbits.ACKDT = 1;
        I2C2CONbits.ACKEN = 1;
        while (I2C2CONbits.ACKEN);
        break;
#endif
#ifdef I2C_NUM3
    case I2C_NUM3:
        I2C3CONbits.ACKDT = 1;
        I2C3CONbits.ACKEN = 1;
        while (I2C3CONbits.ACKEN);
        break;
#endif
#ifdef I2C_NUM4
    case I2C_NUM4:
        I2C4CONbits.ACKDT = 1;
        I2C4CONbits.ACKEN = 1;
        while (I2C4CONbits.ACKEN);
        break;
#endif
#ifdef I2C_NUM5
    case I2C_NUM5:
        I2C5CONbits.ACKDT = 1;
        I2C5CONbits.ACKEN = 1;
        while (I2C5CONbits.ACKEN);
        break;
#endif
    }

    return 0;
}

/**
 * @brief Send a 8 data on the specified i2c bus device
 * @param device i2c bus device number
 * @return 0 if ok, -1 in case of error
 */
int i2c_putc(rt_dev_t device, const char data)
{
    uint8_t i2c = MINOR(device);
    if (i2c >= I2C_COUNT)
        return 0;

    switch (i2c)
    {
#ifdef I2C_NUM1
    case I2C_NUM1:
        I2C1TRN = data;
        if (I2C1STATbits.IWCOL)       // write collision detection
            return -1;
        while (I2C1CONbits.SEN || I2C1CONbits.PEN || I2C1CONbits.RCEN ||
          I2C1CONbits.RSEN || I2C1CONbits.ACKEN || I2C1STATbits.TRSTAT); // wait iddle

        if (I2C1STATbits.ACKSTAT)   // test for ACK received
            return -1;
        break;
#endif
#ifdef I2C_NUM2
    case I2C_NUM2:
        I2C2TRN = data;
        if (I2C2STATbits.IWCOL)       // write collision detection
            return -1;
        while (I2C2CONbits.SEN || I2C2CONbits.PEN || I2C2CONbits.RCEN ||
          I2C2CONbits.RSEN || I2C2CONbits.ACKEN || I2C2STATbits.TRSTAT); // wait iddle

        if (I2C2STATbits.ACKSTAT)   // test for ACK received
            return -1;
        break;
#endif
#ifdef I2C_NUM3
    case I2C_NUM3:
        I2C3TRN = data;
        if (I2C3STATbits.IWCOL)       // write collision detection
            return -1;
        while (I2C3CONbits.SEN || I2C3CONbits.PEN || I2C3CONbits.RCEN ||
          I2C3CONbits.RSEN || I2C3CONbits.ACKEN || I2C3STATbits.TRSTAT); // wait iddle

        if (I2C3STATbits.ACKSTAT)   // test for ACK received
            return -1;
        break;
#endif
#ifdef I2C_NUM4
    case I2C_NUM4:
        I2C4TRN = data;
        if (I2C4STATbits.IWCOL)       // write collision detection
            return -1;
        while (I2C4CONbits.SEN || I2C4CONbits.PEN || I2C4CONbits.RCEN ||
          I2C4CONbits.RSEN || I2C4CONbits.ACKEN || I2C4STATbits.TRSTAT); // wait iddle

        if (I2C4STATbits.ACKSTAT)   // test for ACK received
            return -1;
        break;
#endif
#ifdef I2C_NUM5
    case I2C_NUM5:
        I2C5TRN = data;
        if (I2C5STATbits.IWCOL)       // write collision detection
            return -1;
        while (I2C5CONbits.SEN || I2C5CONbits.PEN || I2C5CONbits.RCEN ||
          I2C5CONbits.RSEN || I2C5CONbits.ACKEN || I2C5STATbits.TRSTAT); // wait iddle

        if (I2C5STATbits.ACKSTAT)   // test for ACK received
            return -1;
        break;
#endif
    }

    return 0;
}

/**
 * @brief Receive a 8 data on the specified i2c bus device
 * @param device i2c bus device number
 * @return data received
 */
uint8_t i2c_getc(rt_dev_t device)
{
    uint8_t i2c = MINOR(device);
    if (i2c >= I2C_COUNT)
        return 0;

    switch (i2c)
    {
#ifdef I2C_NUM1
    case I2C_NUM1:
        I2C1CONbits.RCEN = 1;
        while(I2C1CONbits.RCEN);
        I2C1STATbits.I2COV = 0;
        return I2C1RCV;
#endif
#ifdef I2C_NUM2
    case I2C_NUM2:
        I2C2CONbits.RCEN = 1;
        while(I2C2CONbits.RCEN);
        I2C2STATbits.I2COV = 0;
        return I2C2RCV;
#endif
#ifdef I2C_NUM3
    case I2C_NUM3:
        I2C3CONbits.RCEN = 1;
        while(I2C3CONbits.RCEN);
        I2C3STATbits.I2COV = 0;
        return I2C3RCV;
#endif
#ifdef I2C_NUM4
    case I2C_NUM4:
        I2C4CONbits.RCEN = 1;
        while(I2C4CONbits.RCEN);
        I2C4STATbits.I2COV = 0;
        return I2C4RCV;
#endif
#ifdef I2C_NUM5
    case I2C_NUM5:
        I2C5CONbits.RCEN = 1;
        while(I2C5CONbits.RCEN);
        I2C5STATbits.I2COV = 0;
        return I2C5RCV;
#endif
    }
    return 0;
}