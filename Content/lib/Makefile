TOOLCHAIN_PATH=../toolchain/gcc-arm-none-eabi-4_8-2014q3/bin
ARM_PEFIX=arm-none-eabi-
CC=$(TOOLCHAIN_PATH)/$(ARM_PEFIX)gcc
CC_OPTIONS=-mcpu=cortex-m0plus -mthumb -I"$(LIB_PATH)"
AR=$(TOOLCHAIN_PATH)/$(ARM_PEFIX)ar
AR_OPTIONS=-r
OBJ_PATH=./obj
LIB_PATH=.

all:
	#rm $(OBJ_PATH)/*.o
	#rm $(OBJ_PATH)/*.a

	$(CC) $(CC_OPTIONS) -c -o $(OBJ_PATH)/startup.o $(LIB_PATH)/startup.c
	$(CC) $(CC_OPTIONS) -c -o $(OBJ_PATH)/Vectors.o $(LIB_PATH)/Vectors.c
	$(CC) $(CC_OPTIONS) -c -o $(OBJ_PATH)/CsIO1.o $(LIB_PATH)/CsIO1.c
	$(CC) $(CC_OPTIONS) -c -o $(OBJ_PATH)/IO1.o $(LIB_PATH)/IO1.c
	$(CC) $(CC_OPTIONS) -c -o $(OBJ_PATH)/Cpu.o $(LIB_PATH)/Cpu.c
	$(CC) $(CC_OPTIONS) -c -o $(OBJ_PATH)/Events.o $(LIB_PATH)/Events.c
	$(CC) $(CC_OPTIONS) -c -o $(OBJ_PATH)/WAIT1.o $(LIB_PATH)/WAIT1.c
	$(CC) $(CC_OPTIONS) -c -o $(OBJ_PATH)/LEDpin1.o $(LIB_PATH)/LEDpin1.c
	$(CC) $(CC_OPTIONS) -c -o $(OBJ_PATH)/LEDpin2.o $(LIB_PATH)/LEDpin2.c
	$(CC) $(CC_OPTIONS) -c -o $(OBJ_PATH)/LEDpin3.o $(LIB_PATH)/LEDpin3.c
	$(CC) $(CC_OPTIONS) -c -o $(OBJ_PATH)/BitIoLdd1.o $(LIB_PATH)/BitIoLdd1.c
	$(CC) $(CC_OPTIONS) -c -o $(OBJ_PATH)/BitIoLdd2.o $(LIB_PATH)/BitIoLdd2.c
	$(CC) $(CC_OPTIONS) -c -o $(OBJ_PATH)/BitIoLdd3.o $(LIB_PATH)/BitIoLdd3.c
	$(CC) $(CC_OPTIONS) -c -o $(OBJ_PATH)/LEDR.o $(LIB_PATH)/LEDR.c
	$(CC) $(CC_OPTIONS) -c -o $(OBJ_PATH)/LEDG.o $(LIB_PATH)/LEDG.c
	$(CC) $(CC_OPTIONS) -c -o $(OBJ_PATH)/LEDB.o $(LIB_PATH)/LEDB.c
	$(CC) $(CC_OPTIONS) -c -o $(OBJ_PATH)/PE_LDD.o $(LIB_PATH)/PE_LDD.c

	$(AR) $(AR_OPTIONS) $(OBJ_PATH)/libkl25z.a $(OBJ_PATH)/startup.o $(OBJ_PATH)/Vectors.o $(OBJ_PATH)/IO1.o $(OBJ_PATH)/CsIO1.o $(OBJ_PATH)/Cpu.o $(OBJ_PATH)/Events.o $(OBJ_PATH)/WAIT1.o $(OBJ_PATH)/LEDR.o $(OBJ_PATH)/LEDG.o $(OBJ_PATH)/LEDB.o $(OBJ_PATH)/BitIoLdd1.o $(OBJ_PATH)/BitIoLdd2.o $(OBJ_PATH)/BitIoLdd3.o $(OBJ_PATH)/LEDpin1.o $(OBJ_PATH)/LEDpin2.o $(OBJ_PATH)/LEDpin3.o $(OBJ_PATH)/PE_LDD.o

.PHONY: clean

clean:
	rm $(OBJ_PATH)/*.o
