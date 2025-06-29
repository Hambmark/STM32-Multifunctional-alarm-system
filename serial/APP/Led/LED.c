#include "LED.h"
/**
  * @brief  Set led turn.
  * @param  None
  * @retval None
  */

void LED_ON_Red(void)
{
	HAL_GPIO_WritePin(LED_Red_GPIO_Port, LED_Red_Pin, GPIO_PIN_SET);
}

void LED_OFF_Red(void)
{
	HAL_GPIO_WritePin(LED_Red_GPIO_Port, LED_Red_Pin, GPIO_PIN_RESET);
}

void LED_ON_Yellow(void)
{
	HAL_GPIO_WritePin(LED_Yellow_GPIO_Port, LED_Yellow_Pin, GPIO_PIN_SET);
}

void LED_OFF_Yellow(void)
{
	HAL_GPIO_WritePin(LED_Yellow_GPIO_Port, LED_Yellow_Pin, GPIO_PIN_RESET);
}

void LED_OFF_ALL(void)
{
	HAL_GPIO_WritePin(LED_Yellow_GPIO_Port, LED_Yellow_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_Red_GPIO_Port, LED_Red_Pin, GPIO_PIN_RESET);
}
