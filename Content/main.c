#include "Cpu.h"  /* interface to CPU, do not remove */
#include "WAIT1.h"  /* waiting routines  */
#include "LEDB.h"   /* interface to blue LED */
#include "LEDR.h"   /* interface to red LED */
#include <stdio.h>  /* interface to standard I/O */
#include <stdlib.h>

/* Read a number from the console and return it */
static int readNumber(void) {
  int res, number;

  printf("Enter number:\r\n");
  res = scanf("%d", &number);
  while('\n' != getchar()); /* skip rest of input until '\n' */
  if (res==1) { /* one value read */
    return number;
  } else {
    printf("ERROR: Wrong number input!\r\n");
    return -1;
  }
}

static void GuessTheNumber(int maxVal, int nofTries) {
  int secretNumber, val;
  int i;

  printf("------------------------------\nGuess The Number Game\n------------------------------\n");
  printf("Guess the secret number between 0 and %d. You can guess %d times!\n", maxVal, nofTries);
  secretNumber = rand(); /* needs #include <stdlib.h> */
  secretNumber %= maxVal; /* make it inside limits (0..maxVal) */
  for(i=1;i<=nofTries;i++) {
    printf("Trial %d of %d: ", i, nofTries);
    val = readNumber();
    if (val<0 || val>maxVal) {
      printf("*** ERROR: number must be between %d and %d!\n", 0, maxVal);
    } else if (val<secretNumber) {
      printf("*** Your guess was too low!\n");
    } else if (val>secretNumber) {
      printf("*** Your guess was too high!\n");
    } else {
      printf("*** You found it!\n");
      break;
    }
  }
  if (i<=nofTries) {
    printf("*** You win! Congratulations!\n");
  } else {
    printf("*** You lost! The secret number was %d\n", secretNumber);
  }
}

int main(void) {
  PE_low_level_init(); /* low level driver initialization, do not remove */

  for(;;) {
    GuessTheNumber(100, 5);
  }
  /* do not leave main! */
  return 0;
}
