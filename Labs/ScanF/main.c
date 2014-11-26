#include "Cpu.h"  /* interface to CPU, do not remove */
#include "WAIT1.h"  /* waiting routines  */
#include "LEDB.h"   /* interface to blue LED */
#include <stdio.h>  /* interface to standard I/O */

int main(void) {
  PE_low_level_init(); /* low level driver initialization, do not remove */

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
  /* do not leave main! */
  return 0;
}
