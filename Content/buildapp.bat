@set OBJ_PATH=.\obj
@set LIB_PATH=.\lib
@set TOOLCHAIN_PATH=toolchain\bin
@set ARM_PEFIX=arm-none-eabi-
@set CC=%TOOLCHAIN_PATH%\%ARM_PEFIX%gcc
@set CC_OPTIONS=-mcpu=cortex-m0plus -mthumb -ffunction-sections -fdata-sections -ffreestanding -I"%LIB_PATH%" -std=c99 -Wmissing-declarations
@set LL=%TOOLCHAIN_PATH%\%ARM_PEFIX%g++
@set LL_OPTIONS=-mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -Wall -Wextra -g3 -T "%LIB_PATH%/kl25z.ld" -nostartfiles -Xlinker --gc-sections -L%LIB_PATH%\obj -Wl,-Map,"%OBJ_PATH%/application.map" -specs=nano.specs -specs=nosys.specs 
@set OCP=%TOOLCHAIN_PATH%\%ARM_PEFIX%objcopy
@set OCP_OPTIONS=-O srec

@REM clean up previous build:
del /Q %OBJ_PATH%\*.elf
del /Q .\application.s19

@REM Compile main application file
%CC% %CC_OPTIONS% -c -o %OBJ_PATH%/main.o main.c

@REM Link application 
%LL% %LL_OPTIONS% -o %OBJ_PATH%\application.elf %OBJ_PATH%/main.o -lkl25z %LIB_PATH%/obj/CsIO1.o

@REM Generating S19 File
%OCP% %OCP_OPTIONS% %OBJ_PATH%\application.elf %OBJ_PATH%\application.s19

pause