#ifndef PWM_WAVEFORM_H_
#define PWM_WAVEFORM_H_

/**
 * @file pwm_waveform.h
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

void pwm_init();
char pwm_waveform(uint16_t adc_value);

#endif
