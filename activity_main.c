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
#include "adc_read.h"
#include "main.h"

void port_init(void)
{
    DDRB &= ~(_BV(button_sensor));
    DDRB &= ~(_BV(heater));
    DDRB |= _BV(led_out);
    PORTB |= _BV(led_out);
}

int main(void)
{
    adc_init();
    uint16_t temp_value = 0;


    while(1)
    {
            if((PINB & set_state(button_sensor) >> button_sensor))
            {
                    if((PINB & set_state(heater) >> heater))
                        {
                            led_state(LED_ON);
                            temp_value = adc_read(0);
                        }
            }
            else
            {
                    led_state(LED_OFF);
            }
    }
    return 0;
}
