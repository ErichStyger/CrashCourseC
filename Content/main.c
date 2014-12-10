#include "Cpu.h"  /* interface to CPU, do not remove */
#include "WAIT1.h"  /* waiting routines  */
#include "LEDB.h"   /* interface to blue LED */
#include "LEDR.h"   /* interface to red LED */
#include <stdio.h>  /* interface to standard I/O */

static void while0(void) {
  int i;

  i = 0;
  do {
    printf("i: %d\r\n", i);
    i++;
  } while(i<3);
}

static void while1(void) {
  int i;

  i = 0;
  while (i<3) {
    printf("i: %d\r\n", i);
    i++;
  }
}

static void for0(void) {
  int i, sum;

  sum = 0;
  for(i=0;i<5;i++) {
    sum += i;
    printf("i: %d, sum: %d\r\n", i, sum);
    if (sum==3) {
      printf("break!\r\n", i, sum);
      break;
    }
  }
  printf("loop end!\r\n", i, sum);
}

static void for1(void) {
  int i, sum;

  sum = 0;
  for(i=0;i<5;i++) {
    sum += i;
    printf("i: %d, sum: %d\r\n", i, sum);
    if (sum>10) {
      printf("break!\r\n", i, sum);
      break;
    }
    if (i==3) {
      printf("continue!\r\n", i, sum);
      continue;
    }
  }
  printf("loop end!\r\n", i, sum);
}

int main(void) {
  PE_low_level_init(); /* low level driver initialization, do not remove */

  for(;;) {
    printf("While0:\r\n");
    while0();

    printf("While1:\r\n");
    while1();

    printf("for0:\r\n");
    for0();

    printf("for1:\r\n");
    for1();

    WAIT1_Waitms(500);
    LEDR_Neg();
  }
  /* do not leave main! */
  return 0;
}
