/*
 * Mic_Mode.c
 *
 *  Created on: Dec 19, 2024
 *      Author: 19093
 */

#include "Mic_Mode.h"
#include "Pwm_LED.h"
#include "TS_ADC.h"
#include "beep.h"
#include "MyUsart.h"

char sampleHigh[50] = "\r\n**--警报!!警报!!光照强度过高!--**\r\n";
char tempHigh[50] = "\r\n**--警报!!警报!!温度过高!--**\r\n";

void MIC_MODE_NOMAL(void)
{
	PWM_LED_Green_UP();
	Tamp_And_Sample_ADCPrint();
	PWM_LED_Green_DROP();
	Tamp_And_Sample_ADCPrint();
}

void MIC_MODE_ALARM_Sample(void)
{
	LED_ON_Yellow();
	Beep_Alarm_Sample();
	send_str_uart((uint8_t*)sampleHigh, strlen(sampleHigh));
}

void MIC_MODE_ALARM_Temp(void)
{
	Beep_Alarm_Temp();
	send_str_uart((uint8_t*)tempHigh, strlen(tempHigh));
}
