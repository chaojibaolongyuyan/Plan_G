################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
"../Libraries/iLLD/TC38A/Tricore/Gtm/Pwm/IfxGtm_Pwm.c" 

COMPILED_SRCS += \
"Libraries/iLLD/TC38A/Tricore/Gtm/Pwm/IfxGtm_Pwm.src" 

C_DEPS += \
"./Libraries/iLLD/TC38A/Tricore/Gtm/Pwm/IfxGtm_Pwm.d" 

OBJS += \
"Libraries/iLLD/TC38A/Tricore/Gtm/Pwm/IfxGtm_Pwm.o" 


# Each subdirectory must supply rules for building sources it contributes
"Libraries/iLLD/TC38A/Tricore/Gtm/Pwm/IfxGtm_Pwm.src":"../Libraries/iLLD/TC38A/Tricore/Gtm/Pwm/IfxGtm_Pwm.c" "Libraries/iLLD/TC38A/Tricore/Gtm/Pwm/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc38x "-fH:/Plan_G/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc38x -Y0 -N0 -Z0 -o "$@" "$<"
"Libraries/iLLD/TC38A/Tricore/Gtm/Pwm/IfxGtm_Pwm.o":"Libraries/iLLD/TC38A/Tricore/Gtm/Pwm/IfxGtm_Pwm.src" "Libraries/iLLD/TC38A/Tricore/Gtm/Pwm/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"

clean: clean-Libraries-2f-iLLD-2f-TC38A-2f-Tricore-2f-Gtm-2f-Pwm

clean-Libraries-2f-iLLD-2f-TC38A-2f-Tricore-2f-Gtm-2f-Pwm:
	-$(RM) ./Libraries/iLLD/TC38A/Tricore/Gtm/Pwm/IfxGtm_Pwm.d ./Libraries/iLLD/TC38A/Tricore/Gtm/Pwm/IfxGtm_Pwm.o ./Libraries/iLLD/TC38A/Tricore/Gtm/Pwm/IfxGtm_Pwm.src

.PHONY: clean-Libraries-2f-iLLD-2f-TC38A-2f-Tricore-2f-Gtm-2f-Pwm

