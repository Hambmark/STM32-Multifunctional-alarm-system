################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../APP/Usart/MyUsart.c 

OBJS += \
./APP/Usart/MyUsart.o 

C_DEPS += \
./APP/Usart/MyUsart.d 


# Each subdirectory must supply rules for building sources it contributes
APP/Usart/%.o APP/Usart/%.su APP/Usart/%.cyclo: ../APP/Usart/%.c APP/Usart/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Test" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Led" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Beep" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Usart" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Sampling" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Sample" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Temp" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Tamp&Sample_ADC" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Pwm_LED" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Mic_Mode" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Operation_code" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-APP-2f-Usart

clean-APP-2f-Usart:
	-$(RM) ./APP/Usart/MyUsart.cyclo ./APP/Usart/MyUsart.d ./APP/Usart/MyUsart.o ./APP/Usart/MyUsart.su

.PHONY: clean-APP-2f-Usart

