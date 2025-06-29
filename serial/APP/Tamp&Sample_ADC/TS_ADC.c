/*
 * TS_ADC.c
 *
 *  Created on: Dec 18, 2024
 *      Author: 19093
 */

#include "main.h"
#include "TS_ADC.h"
#include "MyUsart.h"
#include <stdio.h>
#include "Temp.h"
#include "string.h"

extern uint16_t ADC_Values[2];
extern uint16_t sample_Main;
extern float temperature_Main;

char ADC_tempMessage[50] = "";
char ADC_sampleMessage[50] = "";
char line[100] = "\r\n/**---------------------------------------------------**/\r\n";
uint16_t sample = 0;
uint16_t sampleVolt = 0;
float TEMP_R = 0.0;
float temperature = 0.0;

void Tamp_And_Sample_ADCCount(void)
{
	  HAL_Delay(100);
	  sample = ADC_Values[0] * 100 / 4095;
	  sampleVolt = ADC_Values[0] * 330 / 4096;
	  TEMP_R = ADC2Resistance(ADC_Values[1]);
	  temperature = resistance2Temperature(TEMP_R);
	  sprintf(ADC_sampleMessage, "光照强度：%d，电压值：%d.%d%dV\r\n", sample, sampleVolt / 100,  (sampleVolt/10)%10, sampleVolt%10);
	  sprintf(ADC_tempMessage, "温度：%.2f°C，电阻值：%.2fΩ\r\n", temperature, TEMP_R);
}

void Tamp_And_Sample_ADCPrint(void)
{
	Tamp_And_Sample_ADCCount();
	send_str_uart((uint8_t*)line, strlen(line));
	send_str_uart((uint8_t *)ADC_sampleMessage, strlen(ADC_sampleMessage));
	send_str_uart((uint8_t *)ADC_tempMessage, strlen(ADC_tempMessage));
	sample_Main = sample;
	temperature_Main = temperature;
}

