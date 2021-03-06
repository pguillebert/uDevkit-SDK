/**
 * @file msi.h
 * @author Sebastien CAUX (sebcaux)
 * @copyright UniSwarm 2018
 *
 * @date March 2, 10:00 AM
 *
 * @brief Master Slave Interface driver
 */

#ifndef MSI_H
#define MSI_H

#include <archi.h>
#include <driver/device.h>

#if defined(ARCHI_dspic33ch)
 #include "msi_dspic33ch.h"
#else
 #warning Unsuported ARCHI
#endif

typedef enum
{
    MSI_CORE_STATUS_RESETED,
    MSI_CORE_STATUS_STARTED,
    MSI_CORE_STATUS_SLEEPED,
    MSI_CORE_STATUS_LOWPOWERRUN
} MSI_CORE_STATUS;

#ifdef MSI_HAVE_MASTER_INTERFACE
 int msi_slave_start(uint8_t slave_id);
 int msi_slave_stop(uint8_t slave_id);
 int msi_slave_reset(uint8_t slave_id);
 MSI_CORE_STATUS msi_slave_status(uint8_t slave_id);

 int msi_slave_program(uint8_t slave_id, __eds__ unsigned char *program);
 int msi_slave_verify_program(uint8_t slave_id, __eds__ unsigned char *program);
#endif

#ifndef MSI_HAVE_MASTER_INTERFACE
 MSI_CORE_STATUS msi_master_status();
#endif

// Mailboxes
#define MSI_PROTOCOL_A 0
#define MSI_PROTOCOL_B 1
#define MSI_PROTOCOL_C 2
#define MSI_PROTOCOL_D 3
#define MSI_PROTOCOL_E 4
#define MSI_PROTOCOL_F 5
#define MSI_PROTOCOL_G 6
#define MSI_PROTOCOL_H 7

int msi_protocol_write(uint8_t protocol, const unsigned char *data, uint8_t size);

int msi_protocol_read(uint8_t protocol, unsigned char *data, uint8_t max_size);

#endif // MSI_H