/**
 * @file pwm_waveform.c
 * @author Shiva S
 * @brief Activity 3 Display PWM Waveform to show temperature value
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
#include "pwm_waveform.h"

/**
* Peripheral Initialization
*/

void pwm_init()
{
    TCCR1A |= (1 << COM1A1) |  (1 << WGM11) | (1 << WGM10);
    TCCR1B |= (1 << WGM12) |  (1 << CS11) | (1 << CS10);
    DDRB |= (1 << PB1);
}

 /**
 * @brief Function to return temperature value for a given range of ADC Value
 * @param[in] adc_value
 *
 */
int pwm_waveform(uint16_t adc_value)
{
    int t_value = 0;

    /*Based on the condition, the OCR1A register is used to set the duty cycle*/

    if(adc_value >= 0 && adc_value < 210)
    {
        OCR1A = 0x0CD; //20% Duty Cycle (0.20 * 1023 = 205)
        t_value = 20;
        _delay_ms(50);
    }
    else if (adc_value >= 210 && adc_value < 510)
    {
        OCR1A = 0x19A; //40% Duty Cycle (0.40 * 1023 = 410)
        t_value = 25;
        _delay_ms(50);
    }
    else if (adc_value >= 510 && adc_value < 710)
    {
        OCR1A = 0x2CC; //70% Duty Cycle (0.70 * 1023 =  716)
        t_value = 29;
        _delay_ms(50);
    }
    else if (adc_value >= 710 && adc_value < 1024)
    {
        OCR1A = 0x3CC; //95% Duty Cycle (0.95 * 1023 = 972)
        t_value = 33;
        _delay_ms(50);
    }
    else
    {
        OCR1A = 0;
        t_value = 0;
    }
    return t_value;

}
