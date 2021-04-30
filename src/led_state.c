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
* Peripheral Initialization
*/

 void led_init()
 {
     DDRB &= ~(1 << DDB6); //Setting PINB6 as input pin
     DDRB &= ~(1 << DDB7); //Setting PINB7 as input pin
     DDRB |= (1 << DDB0);  //Setting PINB0 as output pin
 }

 /**
 * @brief Function to set value of LED for a port
 *
 * @param[in] value
 *
 */

void led_state (uint8_t value)
{
    PORT_SET |= (value << PIN_SET);
}
