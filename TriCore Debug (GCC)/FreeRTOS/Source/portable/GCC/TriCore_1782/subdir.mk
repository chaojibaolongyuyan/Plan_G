################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../FreeRTOS/Source/portable/GCC/TriCore_1782/port.c 

C_DEPS += \
./FreeRTOS/Source/portable/GCC/TriCore_1782/port.d 

OBJS += \
./FreeRTOS/Source/portable/GCC/TriCore_1782/port.o 


# Each subdirectory must supply rules for building sources it contributes
FreeRTOS/Source/portable/GCC/TriCore_1782/%.o: ../FreeRTOS/Source/portable/GCC/TriCore_1782/%.c FreeRTOS/Source/portable/GCC/TriCore_1782/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AURIX GCC Compiler'
	tricore-elf-gcc -std=c99 "@H:/Plan_G/TriCore Debug (GCC)/AURIX_GCC_Compiler-Include_paths__-I_.opt" -Og -g3 -gdwarf-3 -Wall -c -fmessage-length=0 -fno-common -fstrict-volatile-bitfields -fdata-sections -ffunction-sections -mtc162 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-FreeRTOS-2f-Source-2f-portable-2f-GCC-2f-TriCore_1782

clean-FreeRTOS-2f-Source-2f-portable-2f-GCC-2f-TriCore_1782:
	-$(RM) ./FreeRTOS/Source/portable/GCC/TriCore_1782/port.d ./FreeRTOS/Source/portable/GCC/TriCore_1782/port.o

.PHONY: clean-FreeRTOS-2f-Source-2f-portable-2f-GCC-2f-TriCore_1782

