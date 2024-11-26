################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../bsw/Analog_Sample.c \
../bsw/Drive_Output.c \
../bsw/Frequency_Sample.c \
../bsw/GPIO.c 

C_DEPS += \
./bsw/Analog_Sample.d \
./bsw/Drive_Output.d \
./bsw/Frequency_Sample.d \
./bsw/GPIO.d 

OBJS += \
./bsw/Analog_Sample.o \
./bsw/Drive_Output.o \
./bsw/Frequency_Sample.o \
./bsw/GPIO.o 


# Each subdirectory must supply rules for building sources it contributes
bsw/%.o: ../bsw/%.c bsw/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AURIX GCC Compiler'
	tricore-elf-gcc -std=c99 "@H:/Plan_G/TriCore Debug (GCC)/AURIX_GCC_Compiler-Include_paths__-I_.opt" -Og -g3 -gdwarf-3 -Wall -c -fmessage-length=0 -fno-common -fstrict-volatile-bitfields -fdata-sections -ffunction-sections -mtc162 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-bsw

clean-bsw:
	-$(RM) ./bsw/Analog_Sample.d ./bsw/Analog_Sample.o ./bsw/Drive_Output.d ./bsw/Drive_Output.o ./bsw/Frequency_Sample.d ./bsw/Frequency_Sample.o ./bsw/GPIO.d ./bsw/GPIO.o

.PHONY: clean-bsw

