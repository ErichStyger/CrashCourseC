REM Batch file to build the library files
@set TOOLCHAIN_PATH=..\toolchain\bin
@set ARM_PEFIX=arm-none-eabi-
@set CC=%TOOLCHAIN_PATH%\%ARM_PEFIX%gcc
@set CC_OPTIONS=-mcpu=cortex-m0plus -mthumb -I"%LIB_PATH%"
@set AR=%TOOLCHAIN_PATH%\%ARM_PEFIX%ar
@set AR_OPTIONS=-r
@set OBJ_PATH=.\obj
@set LIB_PATH=.

@REM clean up previous build:
del /Q %OBJ_PATH%\*.o
del /Q %OBJ_PATH%\*.a

@REM Compile library code
%CC% %CC_OPTIONS% -c -o %OBJ_PATH%/startup.o %LIB_PATH%/startup.c
%CC% %CC_OPTIONS% -c -o %OBJ_PATH%/Vectors.o %LIB_PATH%/Vectors.c
%CC% %CC_OPTIONS% -c -o %OBJ_PATH%/CsIO1.o %LIB_PATH%/CsIO1.c
%CC% %CC_OPTIONS% -c -o %OBJ_PATH%/IO1.o %LIB_PATH%/IO1.c
%CC% %CC_OPTIONS% -c -o %OBJ_PATH%/Cpu.o %LIB_PATH%/Cpu.c
%CC% %CC_OPTIONS% -c -o %OBJ_PATH%/Events.o %LIB_PATH%/Events.c
%CC% %CC_OPTIONS% -c -o %OBJ_PATH%/WAIT1.o %LIB_PATH%/WAIT1.c
%CC% %CC_OPTIONS% -c -o %OBJ_PATH%/LEDpin1.o %LIB_PATH%/LEDpin1.c
%CC% %CC_OPTIONS% -c -o %OBJ_PATH%/LEDpin2.o %LIB_PATH%/LEDpin2.c
%CC% %CC_OPTIONS% -c -o %OBJ_PATH%/LEDpin3.o %LIB_PATH%/LEDpin3.c
%CC% %CC_OPTIONS% -c -o %OBJ_PATH%/BitIoLdd1.o %LIB_PATH%/BitIoLdd1.c
%CC% %CC_OPTIONS% -c -o %OBJ_PATH%/BitIoLdd2.o %LIB_PATH%/BitIoLdd2.c
%CC% %CC_OPTIONS% -c -o %OBJ_PATH%/BitIoLdd3.o %LIB_PATH%/BitIoLdd3.c
%CC% %CC_OPTIONS% -c -o %OBJ_PATH%/LEDR.o %LIB_PATH%/LEDR.c
%CC% %CC_OPTIONS% -c -o %OBJ_PATH%/LEDG.o %LIB_PATH%/LEDG.c
%CC% %CC_OPTIONS% -c -o %OBJ_PATH%/LEDB.o %LIB_PATH%/LEDB.c
%CC% %CC_OPTIONS% -c -o %OBJ_PATH%/UTIL1.o %LIB_PATH%/UTIL1.c
%CC% %CC_OPTIONS% -c -o %OBJ_PATH%/PE_LDD.o %LIB_PATH%/PE_LDD.c

REM Build library
%AR% %AR_OPTIONS% %OBJ_PATH%/libkl25z.a %OBJ_PATH%/startup.o %OBJ_PATH%/Vectors.o %OBJ_PATH%/IO1.o %OBJ_PATH%/CsIO1.o %OBJ_PATH%/Cpu.o %OBJ_PATH%/Events.o %OBJ_PATH%/WAIT1.o %OBJ_PATH%/LEDR.o %OBJ_PATH%/LEDG.o %OBJ_PATH%/LEDB.o %OBJ_PATH%/BitIoLdd1.o %OBJ_PATH%/BitIoLdd2.o %OBJ_PATH%/BitIoLdd3.o %OBJ_PATH%/LEDpin1.o %OBJ_PATH%/LEDpin2.o %OBJ_PATH%/LEDpin3.o %OBJ_PATH%/UTIL1.o %OBJ_PATH%/PE_LDD.o
pause
rem del /Q %OBJ_PATH%\*.o
