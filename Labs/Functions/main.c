#include "Cpu.h"  /* interface to CPU, do not remove */
#include <stdio.h>  /* interface to standard I/O */

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

int main(void) {
  PE_low_level_init(); /* low level driver initialization, do not remove */

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
  /* do not leave main! */
  return 0;
}
