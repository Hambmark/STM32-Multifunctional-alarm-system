/*
 * Temp.h
 *
 *  Created on: Dec 17, 2024
 *      Author: 19093
 */

#ifndef TEMP_TEMP_H_
#define TEMP_TEMP_H_

#include "main.h"

float ADC2Resistance(uint32_t adc_value);
float resistance2Temperature(float R1);

#endif /* TEMP_TEMP_H_ */
