# printf

---

[Back](../instructions.md)

The goal write text to the console/terminal. For this we are using ```printf()```.

## printf Introduction
[```printf()```](../io/printf.md) is a function of the standard library (```stdio.h```) which can be used to output text to a terminal or console.
See [```printf()```](../io/printf.md) how it is used.


## Hello World
Before using ```printf()```, you need to include the interface first, which is in ```stdio.h```:
```c
#include <stdio.h>
```

Notice that so far we used something like
```c
#include "LEDR.h"
```
with the file name in double quotes. The difference between using ```"..."``` and ```<...>``` is:
* with ```"..."``` the compiler searches in the 'user' include folders.
* with ```<...>``` the compiler searches in the 'library' include folders.

Example to print a hello world message:

```c
#include "Cpu.h"    /* interface to CPU, do not remove */
#include "WAIT1.h"  /* waiting routines  */
#include "LEDB.h"   /* interface to blue LED */
#include <stdio.h>  /* interface to standard I/O */

int main(void) {
  PE_low_level_init(); /* low level driver initialization, do not remove */

  for(;;) {
     /* add your code here */
     LEDB_Neg();
     printf("hello world!\r\n");
     WAIT1_Waitms(1000);
  }
  /* do not leave main! */
  return 0;
}

```
Build that program and check what it writes to your terminal program.

## Printing counting numbers
Now lets write the numbers from 0 to 10. For this we are going to use a local variable:
```c
int i;
```
We create a ```for``` loop. See [```for```](../controls/for.md) how this loop control is used.

In the ```for``` loop, the variable ```i``` gets initialized with zero (```i=0```).
The loop continues as long as i is smaller than 10 (```i<10```).
For every iteration of the loop, it increments the variable i by one (```i++```);
```c
for(i=0; i<10; i++) {
  ...
}
```
Now let's pack that into the whole program like this:

```c
#include "Cpu.h"    /* interface to CPU, do not remove */
#include "WAIT1.h"  /* waiting routines  */
#include "LEDB.h"   /* interface to blue LED */
#include <stdio.h>  /* interface to standard I/O */

int main(void) {
  int i;

  PE_low_level_init(); /* low level driver initialization, do not remove */
  for(;;) {
     /* add your code here */
     for(i=0; i<10; i++) {
       LEDB_Neg();
       printf("variable i is now %d\r\n", i);
       WAIT1_Waitms(100);
     }
  }
  /* do not leave main! */
  return 0;
}

```

Congratulations, you have used ```printf()``` in combination with a for ```loop```!



