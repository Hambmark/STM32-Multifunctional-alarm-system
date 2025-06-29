################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../APP/Operation_code/Operation_code.c 

OBJS += \
./APP/Operation_code/Operation_code.o 

C_DEPS += \
./APP/Operation_code/Operation_code.d 


# Each subdirectory must supply rules for building sources it contributes
APP/Operation_code/%.o APP/Operation_code/%.su APP/Operation_code/%.cyclo: ../APP/Operation_code/%.c APP/Operation_code/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Test" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Led" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Beep" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Usart" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Sampling" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Sample" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Temp" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Tamp&Sample_ADC" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Pwm_LED" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Mic_Mode" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Operation_code" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-APP-2f-Operation_code

clean-APP-2f-Operation_code:
	-$(RM) ./APP/Operation_code/Operation_code.cyclo ./APP/Operation_code/Operation_code.d ./APP/Operation_code/Operation_code.o ./APP/Operation_code/Operation_code.su

.PHONY: clean-APP-2f-Operation_code

