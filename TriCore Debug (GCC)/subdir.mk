################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Cpu0_Main.c \
../Cpu1_Main.c \
../Cpu2_Main.c \
../Cpu3_Main.c \
../MCMCAN.c 

LSL_SRCS += \
../Lcf_Gnuc_Tricore_Tc.lsl \
../Lcf_Tasking_Tricore_Tc.lsl 

C_DEPS += \
./Cpu0_Main.d \
./Cpu1_Main.d \
./Cpu2_Main.d \
./Cpu3_Main.d \
./MCMCAN.d 

OBJS += \
./Cpu0_Main.o \
./Cpu1_Main.o \
./Cpu2_Main.o \
./Cpu3_Main.o \
./MCMCAN.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AURIX GCC Compiler'
	tricore-elf-gcc -std=c99 "@H:/Plan_G/TriCore Debug (GCC)/AURIX_GCC_Compiler-Include_paths__-I_.opt" -Og -g3 -gdwarf-3 -Wall -c -fmessage-length=0 -fno-common -fstrict-volatile-bitfields -fdata-sections -ffunction-sections -mtc162 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./Cpu0_Main.d ./Cpu0_Main.o ./Cpu1_Main.d ./Cpu1_Main.o ./Cpu2_Main.d ./Cpu2_Main.o ./Cpu3_Main.d ./Cpu3_Main.o ./MCMCAN.d ./MCMCAN.o

.PHONY: clean--2e-

