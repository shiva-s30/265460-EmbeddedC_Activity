#ifndef UART_H_
#define UART_H_

/**
 * @file uart.h
 * @author Shiva S
 * @brief required header files and macro definitions
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

void uart_init(uint16_t ubbr_value);
void uart_write(char data);



#endif
