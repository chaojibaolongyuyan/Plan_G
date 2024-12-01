################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Libraries/iLLD/TC38A/Tricore/_PinMap/subdir.mk
-include Libraries/iLLD/TC38A/Tricore/_Impl/subdir.mk
-include Libraries/iLLD/TC38A/Tricore/Stm/Timer/subdir.mk
-include Libraries/iLLD/TC38A/Tricore/Stm/Std/subdir.mk
-include Libraries/iLLD/TC38A/Tricore/Src/Std/subdir.mk
-include Libraries/iLLD/TC38A/Tricore/Scu/Std/subdir.mk
-include Libraries/iLLD/TC38A/Tricore/Port/Std/subdir.mk
-include Libraries/iLLD/TC38A/Tricore/Pms/Std/subdir.mk
-include Libraries/iLLD/TC38A/Tricore/Mtu/Std/subdir.mk
-include Libraries/iLLD/TC38A/Tricore/Gtm/Std/subdir.mk
-include Libraries/iLLD/TC38A/Tricore/Cpu/Trap/subdir.mk
-include Libraries/iLLD/TC38A/Tricore/Cpu/Std/subdir.mk
-include Libraries/iLLD/TC38A/Tricore/Cpu/Irq/subdir.mk
-include Libraries/iLLD/TC38A/Tricore/Can/Std/subdir.mk
-include Libraries/iLLD/TC38A/Tricore/Can/Can/subdir.mk
-include Libraries/Service/CpuGeneric/StdIf/subdir.mk
-include Libraries/Infra/Ssw/TC38A/Tricore/subdir.mk
-include Libraries/Infra/Platform/Tricore/Compilers/subdir.mk
-include Libraries/GIAST_DRIVER/subdir.mk
-include FreeRTOS/Source/portable/MemMang/subdir.mk
-include FreeRTOS/Source/portable/GCC/TriCore_1782/subdir.mk
-include FreeRTOS/Source/subdir.mk
-include Configurations/Debug/subdir.mk
-include Configurations/subdir.mk
-include subdir.mk
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := G_001
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_FLASH += \
G_001.hex \

SECONDARY_LIST += \
G_001.lst \

SECONDARY_SIZE += \
G_001.siz \


# All Target
all: main-build

# Main-build Target
main-build: G_001.elf secondary-outputs

# Tool invocations
G_001.elf: $(OBJS) ../Lcf_Gnuc_Tricore_Tc.lsl makefile $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: AURIX GCC Linker'
	tricore-elf-gcc -T"../Lcf_Gnuc_Tricore_Tc.lsl" -nocrt0 -Wl,--gc-sections -mtc162 -o "G_001.elf" $(OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

G_001.hex: G_001.elf makefile $(OPTIONAL_TOOL_DEPS)
	@echo 'Invoking: AURIX Object Copy'
	tricore-elf-objcopy -O ihex "G_001.elf" "G_001.hex"
	@echo 'Finished building: $@'
	@echo ' '

G_001.lst: G_001.elf makefile $(OPTIONAL_TOOL_DEPS)
	@echo 'Invoking: AURIX Create Listing'
	tricore-elf-objdump -h -S "G_001.elf" > "G_001.lst"
	@echo 'Finished building: $@'
	@echo ' '

G_001.siz: G_001.elf makefile $(OPTIONAL_TOOL_DEPS)
	@echo 'Invoking: AURIX Print Size'
	tricore-elf-size  --format=berkeley "G_001.elf"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) G_001.elf G_001.hex G_001.lst G_001.siz
	-@echo ' '

secondary-outputs: $(SECONDARY_FLASH) $(SECONDARY_LIST) $(SECONDARY_SIZE)

.PHONY: all clean dependents main-build

-include ../makefile.targets
