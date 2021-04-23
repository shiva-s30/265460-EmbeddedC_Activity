/**
 * @file header.h
 * @author Shiva S
 * @brief Project to build a temperature controller
 * @version 0.1
 * @date 2021-04-23
 *
 * @copyright Copyright (c) 2021
 *
 */


#include "header.h"

int main(void)
{
    // Insert code
    DDRB &= ~(_BV(button_sensor_ip)); /*Set PB0 as input*/
    DDRB |= _BV(button_sensor_op); /*Set PB1 as output*/
    DDRB &= ~(_BV(heater_ip)); /*Set PB2 as input*/
    //DDRB |= _BV(heater_op); /*Set PB3 as output*/
    DDRB |= _BV(led_actuator_op); /*Set PB4 as output*/

    while(1)
    {
            if((PINB & _BV(button_sensor_ip) >> button_sensor_ip)) //Condition to check if person is seated*/
            {
                PORTB |= (_BV(button_sensor_op)); /*Updating register to confirm that person has seated*/

                    if((PINB & _BV(heater_ip) >> heater_ip)) /*Condition to check if person has turned the heater ON*/
                        {
                            PORTB |= (_BV(led_actuator_op)); /*LED is turned ON as both conditions are true*/
                            _delay_ms(1500);
                        }
                     else
                           {
                               PORTB &= ~(_BV(led_actuator_op)); /*LED is turned OFF as heater is not turned ON*/
                               _delay_ms(1500);
                           }
            }
            else
            {
                PORTB &= ~(_BV(button_sensor_op)); /*Updating register to confirm that person has not seated*/
            }

    }
    return 0;
}

