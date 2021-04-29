/**
 * @file main.c
 * @author Shiva S
 * @brief Project to build a temperature controller
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

int main(void)
{
    led_init();
    adc_init();
    pwm_init();
    uart_init(103);

    uint16_t temp_value = 0;
    char temp;


    while(1)
    {
            if(BUTTON_SENSOR_SET && HEATER_SET)
                        {
                            led_state(LED_ON);
                            temp_value = adc_read(3);
                            temp = pwm_waveform(temp_value);
                            uart_write(temp);
                        }
            else
            {
                    led_state(LED_OFF);
            }
    }
    return 0;
}
