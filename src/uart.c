/**
 * @file uart.c
 * @author Shiva S
 * @brief Activity 4 Serial communication of temp value from microcontroller
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
#include "uart.h"

void uart_init(uint16_t ubbr_value)
{
    //Setting Baud Rate
    UBRR0L = ubbr_value;
    UBRR0H = (ubbr_value >> 8) & 0x00ff;
    UCSR0C = (1 << UMSEL00) | (1 << UCSZ01) | (1 << UCSZ00);
    //Enabling the receiver and transmitter
    UCSR0B = (1 << RXEN0) | (1 << TXEN0) | (1<<RXCIE0)| (1 << TXCIE0);
}

void uart_write(char data)
{
    while(!(UCSR0A & (1<<UDRE0)))
    {

    }
    UDR0 = data;
}
