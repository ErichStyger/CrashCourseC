# scanf

---

[Back](../instructions.md)

The goal is to read text from the console/terminal. For this we are using [```scanf()```](../io/scanf.md) which works similar as the [```printf()```](../io/printf.md) from the previous lab.

## scanf Introduction
[```scanf()```](../io/scanf.md) is a function of the standard library (```stdio.h```) which can be used to read text from a terminal or console.
See how it is used: [```scanf()```](../io/scanf.md).


## Hello World
Before using ```scanf()```, you need to include the interface first, which is in ```stdio.h```:
```c
#include <stdio.h>
```

Example to read a number:

```c
#include "Cpu.h"    /* interface to CPU, do not remove */
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

```
Build that program and check what it writes to your terminal program.

The above program uses in addition the function ```getchar()```: this is necessary to skip remaining input characters until a new line. Otherwise if wrong or too many values are entered, ```scanf()``` will loop forever!

Congratulations, you have used ```scanf()```!

## Ideas
* Extend the above program so it blinks a LED. E.g. blink the red LED if you have entered the number ```1```, and the blue if you have read the number ```2```.
* Scan for two numbers in a row with ```"%d %d"```. Don't forget to pass two pointers to variables after the formatting string.


```c
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
      if (value==100) {
        LEDB_On();
      } else {
        LEDB_Off();
      }
    } else {
      printf("Wrong number of input: is '%d' but should be '1'!\r\n", result);
    }
  }
  /* do not leave main! */
  return 0;
}
```


