################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Libraries/iLLD/TC38A/Tricore/Psi5s/Std/IfxPsi5s.c 

C_DEPS += \
./Libraries/iLLD/TC38A/Tricore/Psi5s/Std/IfxPsi5s.d 

OBJS += \
./Libraries/iLLD/TC38A/Tricore/Psi5s/Std/IfxPsi5s.o 


# Each subdirectory must supply rules for building sources it contributes
Libraries/iLLD/TC38A/Tricore/Psi5s/Std/%.o: ../Libraries/iLLD/TC38A/Tricore/Psi5s/Std/%.c Libraries/iLLD/TC38A/Tricore/Psi5s/Std/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AURIX GCC Compiler'
	tricore-elf-gcc -std=c99 "@H:/Plan_G/TriCore Debug (GCC)/AURIX_GCC_Compiler-Include_paths__-I_.opt" -Og -g3 -gdwarf-3 -Wall -c -fmessage-length=0 -fno-common -fstrict-volatile-bitfields -fdata-sections -ffunction-sections -mtc162 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-Libraries-2f-iLLD-2f-TC38A-2f-Tricore-2f-Psi5s-2f-Std

clean-Libraries-2f-iLLD-2f-TC38A-2f-Tricore-2f-Psi5s-2f-Std:
	-$(RM) ./Libraries/iLLD/TC38A/Tricore/Psi5s/Std/IfxPsi5s.d ./Libraries/iLLD/TC38A/Tricore/Psi5s/Std/IfxPsi5s.o

.PHONY: clean-Libraries-2f-iLLD-2f-TC38A-2f-Tricore-2f-Psi5s-2f-Std

