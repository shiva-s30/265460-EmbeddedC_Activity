#ifndef HEADER_H_
#define HEADER_H_

/**
 * @file header.h
 * @author Shiva S
 * @brief required header files and macro definitions
 * @version 0.1
 * @date 2021-04-23
 *
 * @copyright Copyright (c) 2021
 *
 */


 /**
 * Include files
 */

#include <avr/io.h>
#include <util/delay.h>

/**
 * Macro Definitions
 */

#define button_sensor_ip DDB0
#define button_sensor_op DDB1
#define heater_ip DDB2
//#define heater_op DDB3
#define led_actuator_op DDB4

#endif

