#include "Cpu.h"  /* interface to CPU, do not remove */
#include "WAIT1.h"  /* waiting routines  */
#include "LEDG.h"   /* blueLED */

int main(void) {
  PE_low_level_init(); /* low level driver initialization, do not remove */

  for(;;) {
     /* add your code here */
     LEDG_On();
     WAIT1_Waitms(100);
     LEDG_Off();
     WAIT1_Waitms(100);
  }
  /* do not leave main! */
  return 0;
}
