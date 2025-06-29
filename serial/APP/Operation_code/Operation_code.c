/*
 * Operation_code.c
 *
 *  Created on: Dec 30, 2024
 *      Author: 19093
 */

#include "Operation_code.h"
#include <string.h>
#include <stdio.h>
#include "beep.h"
#include "LED.h"
#include "test.h"
#include "Sample.h"
#include "Temp.h"
#include "MyUsart.h"
#include "Mic_Mode.h"
#include "Pwm_LED.h"

extern float temperature_Main;
extern char shutDown[50];
extern uint16_t ADC_Values[2];
extern uint8_t KeyNumber;
extern uint8_t alarmState;
extern uint16_t sample_Main;

enum MIC {
	Nomal,
	Alarm_SMAPLE,
	Alarm_TEMP
};
enum MIC mic = Nomal;

void Operation_code(void)
{
	  if (KeyNumber == 1)
	  {
		  switch (mic) {
			case Nomal:
				MIC_MODE_NOMAL();
				if (sample_Main < 10)mic = Alarm_SMAPLE;
				else if (temperature_Main > 24.00)mic = Alarm_TEMP;
				break;
			case Alarm_SMAPLE:
				MIC_MODE_ALARM_Sample();
				break;
			case Alarm_TEMP:
				MIC_MODE_ALARM_Temp();
				break;
		}
		  if (alarmState == 0){ alarmState = 1; mic = Nomal; LED_OFF_ALL(); }
		  if (KeyNumber == 0)send_str_uart((uint8_t*)shutDown, strlen(shutDown));
	  }
	  else
	  {
		  LED_OFF_ALL();
		  mic = Nomal;
	  }
}
