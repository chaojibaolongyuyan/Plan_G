################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
"../Libraries/iLLD/TC38A/Tricore/I2c/Std/IfxI2c.c" 

COMPILED_SRCS += \
"Libraries/iLLD/TC38A/Tricore/I2c/Std/IfxI2c.src" 

C_DEPS += \
"./Libraries/iLLD/TC38A/Tricore/I2c/Std/IfxI2c.d" 

OBJS += \
"Libraries/iLLD/TC38A/Tricore/I2c/Std/IfxI2c.o" 


# Each subdirectory must supply rules for building sources it contributes
"Libraries/iLLD/TC38A/Tricore/I2c/Std/IfxI2c.src":"../Libraries/iLLD/TC38A/Tricore/I2c/Std/IfxI2c.c" "Libraries/iLLD/TC38A/Tricore/I2c/Std/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc38x "-fH:/Plan_G/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc38x -Y0 -N0 -Z0 -o "$@" "$<"
"Libraries/iLLD/TC38A/Tricore/I2c/Std/IfxI2c.o":"Libraries/iLLD/TC38A/Tricore/I2c/Std/IfxI2c.src" "Libraries/iLLD/TC38A/Tricore/I2c/Std/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"

clean: clean-Libraries-2f-iLLD-2f-TC38A-2f-Tricore-2f-I2c-2f-Std

clean-Libraries-2f-iLLD-2f-TC38A-2f-Tricore-2f-I2c-2f-Std:
	-$(RM) ./Libraries/iLLD/TC38A/Tricore/I2c/Std/IfxI2c.d ./Libraries/iLLD/TC38A/Tricore/I2c/Std/IfxI2c.o ./Libraries/iLLD/TC38A/Tricore/I2c/Std/IfxI2c.src

.PHONY: clean-Libraries-2f-iLLD-2f-TC38A-2f-Tricore-2f-I2c-2f-Std
