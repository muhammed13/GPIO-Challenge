################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GPIO_REQ7.c \
../GPIO_REQ8.c \
../GPIO_REQ9.c \
../gpio.c \
../led.c \
../main.c \
../pushButton.c \
../sevenSeg.c \
../softwareDelay.c 

OBJS += \
./GPIO_REQ7.o \
./GPIO_REQ8.o \
./GPIO_REQ9.o \
./gpio.o \
./led.o \
./main.o \
./pushButton.o \
./sevenSeg.o \
./softwareDelay.o 

C_DEPS += \
./GPIO_REQ7.d \
./GPIO_REQ8.d \
./GPIO_REQ9.d \
./gpio.d \
./led.d \
./main.d \
./pushButton.d \
./sevenSeg.d \
./softwareDelay.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


