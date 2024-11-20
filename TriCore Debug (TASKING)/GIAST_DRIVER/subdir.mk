################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
"../GIAST_DRIVER/CAN_Main.c" 

COMPILED_SRCS += \
"GIAST_DRIVER/CAN_Main.src" 

C_DEPS += \
"./GIAST_DRIVER/CAN_Main.d" 

OBJS += \
"GIAST_DRIVER/CAN_Main.o" 


# Each subdirectory must supply rules for building sources it contributes
"GIAST_DRIVER/CAN_Main.src":"../GIAST_DRIVER/CAN_Main.c" "GIAST_DRIVER/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc38x "-fH:/Plan_G/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc38x -Y0 -N0 -Z0 -o "$@" "$<"
"GIAST_DRIVER/CAN_Main.o":"GIAST_DRIVER/CAN_Main.src" "GIAST_DRIVER/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"

clean: clean-GIAST_DRIVER

clean-GIAST_DRIVER:
	-$(RM) ./GIAST_DRIVER/CAN_Main.d ./GIAST_DRIVER/CAN_Main.o ./GIAST_DRIVER/CAN_Main.src

.PHONY: clean-GIAST_DRIVER

