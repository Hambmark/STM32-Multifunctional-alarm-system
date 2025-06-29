/*
 * Sample.c
 *
 *  Created on: Dec 17, 2024
 *      Author: 19093
 */


#include "Sample.h"
#include "MyUsart.h"
#include "stdio.h"

extern ADC_HandleTypeDef hadc1;

uint16_t ADC_Sample = 0,ADC_Volt = 0;//ADC_Value为采样值，ADC_Volt为电压值
uint8_t str[64];//给定一个数组空间，存放sprintf的内容

void Send_ADC_Sample(void)
{
	sprintf((char*)str,"\r\nIllumination intensity:%d,Voltage value:%d.%d%d",ADC_Sample * 100 / 4095, ADC_Volt/100, (ADC_Volt/10)%10, ADC_Volt%10);//使用sprintf把将要发送的内容存放到数组
	send_str_uart(str, sizeof(str));//将数组中的内容发送到串口
}

void Get_ADC_Sample()
{
    HAL_ADC_Start(&hadc1);//打开ADC转换
    if(HAL_ADC_PollForConversion(&hadc1,10) == HAL_OK)
    {
		ADC_Sample = HAL_ADC_GetValue(&hadc1);//将得到的ADC采样值放入变量ADC_Sample中
		ADC_Volt = ADC_Sample * 330/4096;//数据转换，电压为3.3V，数据时12位，保留两位小数
    }
    Send_ADC_Sample();//将上面数据进行存放，发送到上位机
    HAL_ADC_Stop(&hadc1);//停止ADC转换
}




void Print_ADC_Sample()
{
    Get_ADC_Sample();
    HAL_Delay(500);
}
