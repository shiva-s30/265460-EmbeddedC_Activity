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
#include "main.h"

void adc_init()
{
    ADMUX=(1<<REFS0);
    ADCSRA=(1<<ADEN)|(7<<ADPS0);
}

uint16_t adc_read(uint8_t ch)
{
    //Select ADC Channel ch must be 0-7
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;
    //Start single conversion
    ADCSRA|=(1<<ADSC);
    //Wait for conversion to complete
    while(!(ADCSRA & (1<<ADIF)));
    //Clear ADIF by writing one to it
    ADCSRA|=(1<<ADIF);
    return(ADC);
}
