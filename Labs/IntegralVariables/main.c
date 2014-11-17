#include "Cpu.h"  /* interface to CPU, do not remove */
#include "WAIT1.h"  /* waiting routines  */
#include "LEDR.h"   /* red LED */
#include "LEDB.h"   /* blue LED */

int useRed = 1;

int main(void) {
  PE_low_level_init(); /* low level driver initialization, do not remove */

  for(;;) {
     /* add your code here */
    if (useRed==1) {
      LEDR_Neg();
    } else {
      LEDB_Neg();
    }
    WAIT1_Waitms(500);
  }
  /* do not leave main! */
  return 0;
}
