/**
 * @file cmds.h
 * @author Sebastien CAUX (sebcaux) \
 * @copyright Robotips 2016
 *
 * @date October 10, 2016, 10:44 PM
 *
 * @brief Headers for all commands
 */

#ifndef CMDS_H
#define CMDS_H

int cmd_ls(int argc, char **argv);
int cmd_uart(int argc, char **argv);
int cmd_i2c(int argc, char **argv);
int cmd_asserv(int argc, char **argv);
int cmd_adc(int argc, char **argv);

#endif // CMDS_H
