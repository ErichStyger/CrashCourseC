OBJ_PATH=./obj
LIB_PATH=./lib
TOOLCHAIN_PATH=./toolchain/gcc-arm-none-eabi-4_8-2014q3/bin
ARM_PEFIX=arm-none-eabi-
CC=$(TOOLCHAIN_PATH)/$(ARM_PEFIX)gcc
CC_OPTIONS=-mcpu=cortex-m0plus -mthumb -ffunction-sections -fdata-sections -ffreestanding -I"$(LIB_PATH)" -std=c99 -Wmissing-declarations
LL=$(TOOLCHAIN_PATH)/$(ARM_PEFIX)g++
LL_OPTIONS=-mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -Wall -Wextra  -g3 -T "$(LIB_PATH)/kl25z.ld" -nostartfiles -Xlinker --gc-sections -L$(LIB_PATH)/obj -Wl,-Map,"$(OBJ_PATH)/application.map" -specs=./toolchain/gcc-arm-none-eabi-4_8-2014q3/arm-none-eabi/lib/nano.specs -specs=./toolchain/gcc-arm-none-eabi-4_8-2014q3/arm-none-eabi/lib/nosys.specs 
OCP=$(TOOLCHAIN_PATH)/$(ARM_PEFIX)objcopy
OCP_OPTIONS=-O srec


main:
	$(CC) $(CC_OPTIONS) -c -o $(OBJ_PATH)/main.o main.c

rem:
	$(LL) $(LL_OPTIONS) -o $(OBJ_PATH)/application.elf $(OBJ_PATH)/main.o -lkl25z
	$(OCP) $(OCP_OPTIONS) $(OBJ_PATH)/application.elf $(OBJ_PATH)/application.s19

.PHONY: clean
       
clean:
	rm $(OBJ_PATH)/*.o
