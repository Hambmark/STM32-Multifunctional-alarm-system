################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Core/Startup/startup_stm32f103c8tx.s 

OBJS += \
./Core/Startup/startup_stm32f103c8tx.o 

S_DEPS += \
./Core/Startup/startup_stm32f103c8tx.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Startup/%.o: ../Core/Startup/%.s Core/Startup/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m3 -g3 -DDEBUG -c -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Led" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Beep" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Usart" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Sampling" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Sample" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Temp" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Tamp&Sample_ADC" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Pwm_LED" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Mic_Mode" -I"C:/Users/19093/Documents/microcomputer/stm32_Project/STM32-HAL/SERIAL-HAL/serial/APP/Operation_code" -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@" "$<"

clean: clean-Core-2f-Startup

clean-Core-2f-Startup:
	-$(RM) ./Core/Startup/startup_stm32f103c8tx.d ./Core/Startup/startup_stm32f103c8tx.o

.PHONY: clean-Core-2f-Startup

