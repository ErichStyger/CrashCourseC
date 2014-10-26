#include "Cpu.h"  /* interface to CPU, do not removed  */
#include "WAIT1.h"  /* waiting routines  */
#include "LEDR.h"   /* red LED */

int main(void) {
  PE_low_level_init(); /* low level driver initialization, do not remove */

  for(;;) {
     /* add your code here */
     LEDR_Neg();
     WAIT1_Waitms(500);
  }
  /* do not leave main! */
  return 0;
}