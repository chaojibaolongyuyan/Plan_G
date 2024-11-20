################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Libraries/GIAST_DRIVER/CAN_Main.c 

C_DEPS += \
./Libraries/GIAST_DRIVER/CAN_Main.d 

OBJS += \
./Libraries/GIAST_DRIVER/CAN_Main.o 


# Each subdirectory must supply rules for building sources it contributes
Libraries/GIAST_DRIVER/%.o: ../Libraries/GIAST_DRIVER/%.c Libraries/GIAST_DRIVER/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AURIX GCC Compiler'
	tricore-elf-gcc -std=c99 "@H:/Plan_G/TriCore Debug (GCC)/AURIX_GCC_Compiler-Include_paths__-I_.opt" -Og -g3 -gdwarf-3 -Wall -c -fmessage-length=0 -fno-common -fstrict-volatile-bitfields -fdata-sections -ffunction-sections -mtc162 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-Libraries-2f-GIAST_DRIVER

clean-Libraries-2f-GIAST_DRIVER:
	-$(RM) ./Libraries/GIAST_DRIVER/CAN_Main.d ./Libraries/GIAST_DRIVER/CAN_Main.o

.PHONY: clean-Libraries-2f-GIAST_DRIVER

