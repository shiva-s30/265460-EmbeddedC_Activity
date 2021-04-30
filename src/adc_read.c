/**
 * @file adc_read.c
 * @author Shiva S
 * @brief Activity 2 Set ADC Value based on temp sensor input
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
#include "adc_read.h"

/**
* Peripheral Initialization
*/
void adc_init()
{
    ADMUX = (1<<REFS0);
    ADCSRA = (1<<ADEN)|(7<<ADPS0);
}

 /**
 * @brief Function to read value of ADC
 *
 * @param[in] ch
 *
 */
uint16_t adc_read(uint8_t ch)
{

    ADMUX &= 0xf8; //Selecting ADC channel in the range of 0 to 7
    ch = ch & 0b00000111;
    ADMUX |= ch;

    ADCSRA |= (1 << ADSC); //Starting Single Conversion

    while(!(ADCSRA & (1 << ADIF))); //Condition to check if conversion has completed

    ADCSRA |= (1 << ADIF); //Clearing the status of ADIF
    return(ADC);
}
