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
#define button_sensor DDB0
#define heater DDB2
#define set_state(x) (1 << x)


#endif
