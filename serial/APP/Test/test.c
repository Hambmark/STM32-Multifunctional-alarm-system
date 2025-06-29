#include "LED.h"
#include "beep.h"
#include "test.h"
#include "MyUsart.h"
#include "Sample.h"
#include "TS_ADC.h"
#include "Pwm_LED.h"

enum MODULE {
	LED,
	Beep,
	Key,
	Uart,
	Temp,
	Sample,
	Adc,
	Pwm,
	Null
};

enum MODULE test = Adc;

void Test_Modules(void)
{
	uint8_t msg[] = "hello stm32F103!\r\n";
	switch (test) {
		case LED:
			LED_ON_Red();
			HAL_Delay(250);
			LED_OFF_Red();
			HAL_Delay(250);
			LED_ON_Yellow();
			HAL_Delay(250);
			LED_OFF_Yellow();
			HAL_Delay(250);
			break;
		case Beep:
			Beep_Alarm_Temp();
			break;
		case Uart:
			uint16_t size = 0;
			size = sizeof(msg) - 1;
			send_str_uart(msg, size);
			HAL_Delay(1);
			send_int16_uart(size);
			HAL_Delay(1000);
			break;
		case Temp:
			Print_ADC_Sample();
			break;
		case Adc:
			Tamp_And_Sample_ADCPrint();
			break;
		case Pwm:
			PWM_LED_Green_UP();
			PWM_LED_Green_DROP();
			break;
		default:
			break;
	}
}
