#include "beep.h"
#include "LED.h"
/**
  * @brief  Set beep set alarm.
  * @param  None
  * @retval None
  */

void Beep_Alarm_Sample(void)
{
	HAL_GPIO_WritePin(Beep_GPIO_Port, Beep_Pin, GPIO_PIN_RESET);
	HAL_Delay(500);
	HAL_GPIO_WritePin(Beep_GPIO_Port, Beep_Pin, GPIO_PIN_SET);
	HAL_Delay(500);
}

void Beep_Alarm_Temp(void)
{
	HAL_GPIO_WritePin(Beep_GPIO_Port, Beep_Pin, GPIO_PIN_RESET);
	LED_ON_Red();
	HAL_Delay(250);
	HAL_GPIO_WritePin(Beep_GPIO_Port, Beep_Pin, GPIO_PIN_SET);
	LED_OFF_Red();
	HAL_Delay(250);
}

