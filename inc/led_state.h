#ifndef LED_STATE_H
#define LED_STATE_H

/**
 * @file led_state.h
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
#include "main.h"


/**
 * Macro Definitions
 */


#define ON_STATE  (0b00000001)
#define OFF_STATE (0b00000000)

#define PORT_SET (PORTB)
#define PIN_SET  (PORTB0)

#define BUTTON_SENSOR_SET (PINB&(1<<PB6))
#define HEATER_SET (PINB&(1<<PB7))

/**
 * Function Declarations
 */

void led_init();
void led_state (uint8_t state);

#endif
