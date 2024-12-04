################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
"../bsw/Analog_Sample.c" \
"../bsw/Drive_Output.c" \
"../bsw/Frequency_Sample.c" \
"../bsw/GPIO.c" \
"../bsw/Schedule.c" \
"../bsw/zf_device_icm20602.c" \
"../bsw/zf_driver_spi.c" \
"../bsw/zf_driver_uart.c" 

COMPILED_SRCS += \
"bsw/Analog_Sample.src" \
"bsw/Drive_Output.src" \
"bsw/Frequency_Sample.src" \
"bsw/GPIO.src" \
"bsw/Schedule.src" \
"bsw/zf_device_icm20602.src" \
"bsw/zf_driver_spi.src" \
"bsw/zf_driver_uart.src" 

C_DEPS += \
"./bsw/Analog_Sample.d" \
"./bsw/Drive_Output.d" \
"./bsw/Frequency_Sample.d" \
"./bsw/GPIO.d" \
"./bsw/Schedule.d" \
"./bsw/zf_device_icm20602.d" \
"./bsw/zf_driver_spi.d" \
"./bsw/zf_driver_uart.d" 

OBJS += \
"bsw/Analog_Sample.o" \
"bsw/Drive_Output.o" \
"bsw/Frequency_Sample.o" \
"bsw/GPIO.o" \
"bsw/Schedule.o" \
"bsw/zf_device_icm20602.o" \
"bsw/zf_driver_spi.o" \
"bsw/zf_driver_uart.o" 


# Each subdirectory must supply rules for building sources it contributes
"bsw/Analog_Sample.src":"../bsw/Analog_Sample.c" "bsw/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc38x "-fD:/Softinstall/Infineon/AURIX-v1.10.6-workspace/demo5/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc38x -Y0 -N0 -Z0 -o "$@" "$<"
"bsw/Analog_Sample.o":"bsw/Analog_Sample.src" "bsw/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"bsw/Drive_Output.src":"../bsw/Drive_Output.c" "bsw/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc38x "-fD:/Softinstall/Infineon/AURIX-v1.10.6-workspace/demo5/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc38x -Y0 -N0 -Z0 -o "$@" "$<"
"bsw/Drive_Output.o":"bsw/Drive_Output.src" "bsw/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"bsw/Frequency_Sample.src":"../bsw/Frequency_Sample.c" "bsw/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc38x "-fD:/Softinstall/Infineon/AURIX-v1.10.6-workspace/demo5/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc38x -Y0 -N0 -Z0 -o "$@" "$<"
"bsw/Frequency_Sample.o":"bsw/Frequency_Sample.src" "bsw/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"bsw/GPIO.src":"../bsw/GPIO.c" "bsw/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc38x "-fD:/Softinstall/Infineon/AURIX-v1.10.6-workspace/demo5/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc38x -Y0 -N0 -Z0 -o "$@" "$<"
"bsw/GPIO.o":"bsw/GPIO.src" "bsw/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"bsw/Schedule.src":"../bsw/Schedule.c" "bsw/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc38x "-fD:/Softinstall/Infineon/AURIX-v1.10.6-workspace/demo5/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc38x -Y0 -N0 -Z0 -o "$@" "$<"
"bsw/Schedule.o":"bsw/Schedule.src" "bsw/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"bsw/zf_device_icm20602.src":"../bsw/zf_device_icm20602.c" "bsw/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc38x "-fD:/Softinstall/Infineon/AURIX-v1.10.6-workspace/demo5/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc38x -Y0 -N0 -Z0 -o "$@" "$<"
"bsw/zf_device_icm20602.o":"bsw/zf_device_icm20602.src" "bsw/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"bsw/zf_driver_spi.src":"../bsw/zf_driver_spi.c" "bsw/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc38x "-fD:/Softinstall/Infineon/AURIX-v1.10.6-workspace/demo5/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc38x -Y0 -N0 -Z0 -o "$@" "$<"
"bsw/zf_driver_spi.o":"bsw/zf_driver_spi.src" "bsw/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"bsw/zf_driver_uart.src":"../bsw/zf_driver_uart.c" "bsw/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc38x "-fD:/Softinstall/Infineon/AURIX-v1.10.6-workspace/demo5/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc38x -Y0 -N0 -Z0 -o "$@" "$<"
"bsw/zf_driver_uart.o":"bsw/zf_driver_uart.src" "bsw/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"

clean: clean-bsw

clean-bsw:
	-$(RM) ./bsw/Analog_Sample.d ./bsw/Analog_Sample.o ./bsw/Analog_Sample.src ./bsw/Drive_Output.d ./bsw/Drive_Output.o ./bsw/Drive_Output.src ./bsw/Frequency_Sample.d ./bsw/Frequency_Sample.o ./bsw/Frequency_Sample.src ./bsw/GPIO.d ./bsw/GPIO.o ./bsw/GPIO.src ./bsw/Schedule.d ./bsw/Schedule.o ./bsw/Schedule.src ./bsw/zf_device_icm20602.d ./bsw/zf_device_icm20602.o ./bsw/zf_device_icm20602.src ./bsw/zf_driver_spi.d ./bsw/zf_driver_spi.o ./bsw/zf_driver_spi.src ./bsw/zf_driver_uart.d ./bsw/zf_driver_uart.o ./bsw/zf_driver_uart.src

.PHONY: clean-bsw

