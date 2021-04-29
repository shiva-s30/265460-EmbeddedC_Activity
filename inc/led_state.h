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


#define LED_ON (0x01)
#define LED_OFF (0x00)

#define LED_PORT (PORTB)
#define LED_PIN  (PORTB0)

#define BUTTON_SENSOR_SET (PINB & (1 << PB6))
#define HEATER_SET (PINB & (1 << PB7))

void led_init();
void led_state (uint8_t state);

#endif
