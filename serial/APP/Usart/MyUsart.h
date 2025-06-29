/*
 * MyUsart.h
 *
 *  Created on: Dec 13, 2024
 *      Author: 19093
 */

#ifndef USART_MYUSART_H_
#define USART_MYUSART_H_

#include "main.h"

HAL_StatusTypeDef send_str_uart(uint8_t *pData, uint16_t size);
HAL_StatusTypeDef send_uint8_uart(uint8_t u8Val);
HAL_StatusTypeDef send_int8_uart(int8_t i8Val);
HAL_StatusTypeDef send_int16_uart(int16_t i16Val);
HAL_StatusTypeDef send_int32_uart(int32_t i32Val);
HAL_StatusTypeDef send_float_uart(float fVal, uint8_t decimalPlaces);

#endif /* USART_MYUSART_H_ */
