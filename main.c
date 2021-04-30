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

    /**
    * Variable Initialization
    */
    uint16_t adc_value = 0;
    int temp_value = 0;
    const int baud_rate = 103; // Setting a 9600 bps Baud Rate for F_CPU = 16.00 MHz

    /**
    * Peripheral Initialization
    */
    led_init();
    adc_init();
    pwm_init();
    uart_init(baud_rate);


    while(1)
    {
            if(BUTTON_SENSOR_SET && HEATER_SET) //Condition to check if the person has seated and/or turned the heater ON
                    {
                        led_state(ON_STATE); //Turn the LED ON
                        adc_value = adc_read(3); //Reading the value from ADC3 Channel
                        temp_value = pwm_waveform(adc_value); //Reading the temperature based on ADC Value
                        uart_write(temp_value); // Send the temperature value from the microcontroller
                    }
            else
                    {
                        led_state(OFF_STATE); //Turn the LED OFF
                    }
    }
    return 0;
}
