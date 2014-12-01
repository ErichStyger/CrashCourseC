/* ###################################################################
**     Filename    : main.c
**     Project     : FRDM-KL25Z_CrashCourseC
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-11-04, 08:40, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file main.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup main_module main module documentation
**  @{
*/         
/* MODULE main */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "UTIL1.h"
#include "WAIT1.h"
#include "LEDR.h"
#include "LEDpin1.h"
#include "BitIoLdd1.h"
#include "LEDG.h"
#include "LEDpin2.h"
#include "BitIoLdd2.h"
#include "LEDB.h"
#include "LEDpin3.h"
#include "BitIoLdd3.h"
#include "CsIO1.h"
#include "IO1.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* User includes (#include below this line is not maintained by Processor Expert) */
#include <stdio.h>

int useRed = 1;

int multiply(int a, int b) {
  return a*b;
}

/* Divides two numbers (dividend/divisor) and returns the result. In case of division by zero,
 * *isDivisionByZero is set to 1, otherwise to 0.
 */
int divide(int dividend, int divisor, int *isDivisionByZero) {
  if (divisor==0) {
    *isDivisionByZero = 1; /* is division by zero */
    return 0;
  } else {
    *isDivisionByZero = 0; /* is division by zero */
    return dividend/divisor;
  }
}

/* Read a number from the console and return it */
int readNumber(void) {
  int res, number;

  printf("Enter number:\r\n");
  res = scanf("%d", &number);
  while('\n' != getchar()); /* skip rest of input until '\n' */
  if (res==1) { /* one value read */
    return number;
  } else {
    printf("ERROR: Wrong number input!\r\n");
    return 0;
  }
}

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
#if 1
  for(;;) {
    int dividend, divisor, result, isDivisionByZero;

    dividend = readNumber();
    divisor = readNumber();
    result = divide(dividend, divisor, &isDivisionByZero);
    if (isDivisionByZero) {
      printf("ERROR: Division by zero!\r\n");
    } else {
      printf("Result: '%d'\r\n", result);
    }
  } /* for */
#endif
#if 0
  for(;;) {
    int result, value;

    printf("Please enter a number:\r\n");
    result = scanf("%d", &value);
    while('\n' != getchar()); /* skip rest of input until '\n' */
    if (result==1) { /* one value read */
      printf("You entered: '%d'\r\n", value);
    } else {
      printf("Wrong number of input: is '%d' but should be '1'!\r\n", result);
    }
  }
#endif

#if 0
  for(;;) {
    char buffer[32];
    int result;

    printf("Please enter a word:\r\n");
    result = scanf("%s", &buffer[0]);
    if (result==1) {
      printf("You entered: '%s'\r\n", &buffer[0]);
    } else {
      printf("Wrong number of input: is '%d' but should be '1'!\r\n", &buffer[0]);
    }
  }
#endif
#if 0
  for(;;) {
    if (useRed==1) {
      LEDR_Neg();
    } else {
      LEDB_Neg();
    }
    WAIT1_Waitms(500);
  }
#endif
#if 0
  for (;;) {
    LEDR_On();
    WAIT1_Waitms(50);
    LEDR_Off();
    WAIT1_Waitms(50);
    LEDG_On();
    WAIT1_Waitms(50);
    LEDG_Off();
    WAIT1_Waitms(50);
    LEDB_On();
    WAIT1_Waitms(50);
    LEDB_Off();
    WAIT1_Waitms(50);
    printf("hello world!\r\n");
    printf("number %d\r\n", 5);
  }
#endif
  /* For example: for(;;) { } */

  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END main */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.4 [05.10]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
