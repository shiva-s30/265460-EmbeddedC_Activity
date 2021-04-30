#ifndef ADC_READ_H_
#define ADC_READ_H_

/**
 * @file adc_read.h
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

/**
 * Function Declarations
 */

void adc_init();
uint16_t adc_read(uint8_t ch);

#endif
