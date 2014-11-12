# Building the Library

---

[Back](../instructions.md)

The goal is to build the library which is used for our program. 
The library includes drivers for the hardware (LED, etc) but includes as well the necessary startup code.


To build your first application:
* Open **Content/main.c** with a text editor (e.g. Notepad)
* Your an 'empty' program looks like this
```c
#include "Cpu.h"  /* interface to CPU, do not remove */

int main(void) {
  PE_low_level_init(); /* low level driver initialization, do not remove */

  for(;;) {
    /* add your code here */
  }
  /* do not leave main! */
  return 0;
}
```
* Right now your program does nothing, we will add functionality in the labs later on.
* Open a shell/command prompt (if you don't have it already open)
* CD (change directory) into **Content**
* Execute the **buildapp.bat** batch file
* Press a key at the end to continue
* It should build without errors, and the output is **obj\application.s19**
* Copy the application.s19 file to board
* It will automatically execute the program. But as our program does nothing, you won't see anything 

Congratulations, you have compiled and run your first program!


