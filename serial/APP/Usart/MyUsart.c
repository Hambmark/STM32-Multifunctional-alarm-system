/*
 * MyUsart.c
 *
 *  Created on: Dec 13, 2024
 *      Author: 19093
 */

#include "MyUsart.h"
#include <stdio.h>
#include <string.h>
#include <inttypes.h>

extern UART_HandleTypeDef huart1;

HAL_StatusTypeDef send_str_uart(uint8_t *pData, uint16_t size)
{
	return (HAL_UART_Transmit(&huart1, pData, size, HAL_MAX_DELAY));
}

HAL_StatusTypeDef send_uint8_uart(uint8_t u8Val)
{
	char buffer[10];
	sprintf(buffer, "%u", u8Val);
	return (HAL_UART_Transmit(&huart1, (uint8_t *)buffer, strlen(buffer), HAL_MAX_DELAY));
}

HAL_StatusTypeDef send_int8_uart(int8_t i8Val)
{
	char buffer[10];
	sprintf(buffer, "%d", i8Val);
	return (HAL_UART_Transmit(&huart1, (uint8_t *)buffer, strlen(buffer), HAL_MAX_DELAY));
}

HAL_StatusTypeDef send_int16_uart(int16_t i16Val)
{
	char buffer[20];
	sprintf(buffer, "%d", i16Val);
	return (HAL_UART_Transmit(&huart1, (uint8_t *)buffer, strlen(buffer), HAL_MAX_DELAY));
}

HAL_StatusTypeDef send_int32_uart(int32_t i32Val)
{
	char buffer[20];
	sprintf(buffer, "%"PRId32, i32Val);
	return (HAL_UART_Transmit(&huart1, (uint8_t *)buffer, strlen(buffer), HAL_MAX_DELAY));
}
HAL_StatusTypeDef send_float_uart(float fVal, uint8_t decimalPlaces)
{
	char buffer[50];
	if (decimalPlaces < 1)
	{
		decimalPlaces = 1;
	}
	else if (decimalPlaces > 5)
	{
		decimalPlaces = 5;
	}
	sprintf(buffer, "%.*f", decimalPlaces, fVal);
	return (HAL_UART_Transmit(&huart1, (uint8_t *)buffer, strlen(buffer), HAL_MAX_DELAY));
}
