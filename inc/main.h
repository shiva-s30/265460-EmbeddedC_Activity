#ifndef MAIN_H_
#define MAIN_H_

/**
 * @file main.h
 * @author Shiva S
 * @brief required header files and macro definitions
 * @version 0.1
 * @date 2021-04-27
 *
 * @copyright Copyright (c) 2021
 *
 */


 /**
 * Include files
 */

#include <avr/io.h>
#include <util/delay.h>

#include "led_state.h"


/**
 * Macro Definitions
 */
#define F_CPU 16000000UL

#define button_sensor DDB1
#define heater DDB2
#define led_out DDB0
#define set_state(x) (1 << x)


#endif
