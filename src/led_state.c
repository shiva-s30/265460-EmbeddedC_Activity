/**
 * @file led_state.c
 * @author Shiva S
 * @brief Activity 1 Status of LED based on button sensor and heater input
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
#include "led_state.h"

/**
 * @brief Function to set state of LED for a port
 *
 * @param[in] state
 *
 */

 void led_init()
 {
     DDRB &= ~(1 << DDB6);
     DDRB &= ~(1 << DDB7);
     DDRB |= (1 << DDB0);
 }
void led_state (uint8_t state)
{
    LED_PORT |= (state << LED_PIN);
}
