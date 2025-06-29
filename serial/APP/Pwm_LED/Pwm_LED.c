/*
 * Pwm_LED.c
 *
 *  Created on: Dec 19, 2024
 *      Author: 19093
 */

#include "Pwm_LED.h"

uint16_t pwmVal = 0;

extern TIM_HandleTypeDef htim2;

void PWM_LED_Green_UP(void)
{
	while(pwmVal < 300)
	{
		pwmVal++;
		 __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_2, pwmVal);
		 HAL_Delay(1);
	}

}

void PWM_LED_Green_DROP(void)
{
		while(pwmVal)
	{
		pwmVal--;
		 __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_2, pwmVal);
		 HAL_Delay(1);
	}
}
