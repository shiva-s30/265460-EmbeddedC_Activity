/**
 * @file main.c
 * @author Shiva S
 * @brief Project to build a temperature controller
 * @version 0.1
 * @date 2021-04-23
 *
 * @copyright Copyright (c) 2021
 *
 */


/**
 * Include files
 */
#include "led_state.h"
#include "main.h"

void port_init(void)
{
    DDRB &= ~(_BV(button_sensor));
    DDRB &= ~(_BV(heater));
}

int main(void)
{
    while(1)
    {
            if((PINB & set_state(button_sensor) >> button_sensor))
            {
                    if((PINB & set_state(heater) >> heater))
                        {
                            led_state(LED_ON);
                        }
            }
            else
            {
                    led_state(LED_OFF);
            }
    }
    return 0;
}
