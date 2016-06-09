/**
 * @file device.h
 * @author Sebastien CAUX (sebcaux)
 * @copyright Robotips 2016
 *
 * @date June 7, 2016, 11:47 PM
 *
 * @brief Low level periph assignement handler
 */

#ifndef DEVICE_H
#define DEVICE_H

#include <stdint.h>
#include <stdlib.h>

// dev_t definition and macro helpers
typedef uint16_t dev_t;
typedef uint8_t dev_t_class;
#define MAJOR(dev)      ((dev_t_class) ((dev) >> 8))
#define MINOR(dev)      ((uint8_t) ((dev) & 0x00FF))
#define MKDEV(ma,mi)    (((ma) << 8) | (mi))
#define NULLDEV         ((dev_t_class) (0))

// ===== device classes =====
// base communication classes
#define DEV_CLASS_UART          ((dev_t_class) (0x02))
#define DEV_CLASS_UART_SOFT     ((dev_t_class) (DEV_CLASS_UART+1))
#define DEV_CLASS_I2C           ((dev_t_class) (0x04))
#define DEV_CLASS_I2C_SOFT      ((dev_t_class) (DEV_CLASS_I2C+1))
#define DEV_CLASS_SPI           ((dev_t_class) (0x06))
#define DEV_CLASS_SPI_SOFT      ((dev_t_class) (DEV_CLASS_SPI+1))

// special classes
#define DEV_CLASS_QEI           0x11

#endif // DEVICE_H
