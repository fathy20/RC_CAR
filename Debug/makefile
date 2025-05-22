################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL_DRIVERS/subdir.mk
-include HAL_DRIVERS/subdir.mk
-include APP_DRIVER/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
RC_Car.lss \

FLASH_IMAGE += \
RC_Car.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: RC_Car.elf secondary-outputs

# Tool invocations
RC_Car.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,RC_Car.map -mmcu=atmega32 -o "RC_Car.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

RC_Car.lss: RC_Car.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S RC_Car.elf  >"RC_Car.lss"
	@echo 'Finished building: $@'
	@echo ' '

RC_Car.hex: RC_Car.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex RC_Car.elf  "RC_Car.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: RC_Car.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 RC_Car.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) RC_Car.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
