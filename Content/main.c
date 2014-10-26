#include "WAIT1.h"
#include "LEDR.h"
#include "LEDG.h"
#include "LEDB.h"
#include <stdio.h>

int main(void) {
  PE_low_level_init();
  for(;;) {
     WAIT1_Waitms(500);
     printf("hello\r\n");
     LEDR_On();
     WAIT1_Waitms(500);
     LEDR_Off();
     LEDG_On();
     WAIT1_Waitms(500);
     LEDG_Off();
     LEDB_On();
     WAIT1_Waitms(500);
     LEDB_Off();
  }
  return 0;
}