#include "Cpu.h"  /* interface to CPU, do not remove */
#include "WAIT1.h"  /* waiting routines  */
#include "LEDB.h"   /* blueLED */

int main(void) {
  PE_low_level_init(); /* low level driver initialization, do not remove */

  for(;;) {
     /* add your code here */
     LEDB_On();
     WAIT1_Waitms(1000);
     LEDB_Off();
     WAIT1_Waitms(1000);
  }
  /* do not leave main! */
  return 0;
}
