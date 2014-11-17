# Integral Variables

---

[Back](../instructions.md)

The goal is to learn about integral variables.

## Integral Numbers
Variables are memory containers which contain information. They are named 'variables' as their content can vary.
In C there are several predefined integral variables, or integer variables. They are named 'integer' as they can contain
integral (whole) numbers. The integral values can be positive, negative or zero.


Example: -5, 6, 0, 378

## Integral Types
A variable is *defined* with the following (simplified) syntax:

```c
<type> <varibleName> [= <initialization>];
|      |              |                  |
|      |              |                  * semicolon
|      |              |
|      |              * optional initialization
|      |
|      * variable name
|
* variable type

## Signed and Unsigned
```
In C there are several predefined unsigend integral types:
* ```unsigned char```:  unsigned char
* ```unsigned short```: unsigned short integer
* ```unsigned int```: unsigned integer
* ```unsigned long```: unsigned long integer
These are all unsigned types, means they hold values greater-equal zero.
The number range depends on the size of the type. 
If the type is an 8bit variable (e.g. typically the ```unsigned char``` one), then it an hold values from 0 to 255.

Putting ```signed``` in front of the type name makes it a signed type:
* ```signed char```:  signed char
* ```signed short```: signed short integer
* ```signed int```: signed integer
* ```signed long```: signed long integer
A signed 8bit variable (```signed char```) holds values from -128 to 127.

You can omit the ```signed```:
* ```char```: 'plain' char, might be signed or unsigned depending on the compiler!
* ```short```: signed short integer
* ```int```: signed integer
* ```long```: signed long integer

## Size of Types
How many bytes each standard integral type has, depends on the compiler. For a 32bit microprocessor it is typically (both signed and unsigned types):
* ```char```: 8bit, -128 to 127, 0 to 255, 0x00 to 0xFF
* ```short```: 16bit, −32768 to 32767, 0 to 65535, 0x0000 to 0xFFFF
* ```int```: 32bit, −2147483648 to 2147483647, 0 to 4294967295, 0x00000000 to 0xFFFFFFFF
* ```long```: 32bit, dito

## Global or Local
Depending on where the variable is written in the source, this defines which memory it is using. 
For the program there are two basic types of memory:
* Global Memory: a variable in global memory is 'alive' or active during the whole program
* Local Memory: the variable is only alive and accessible while it is 'in scope', e.g. only while that function is running.

## Lab
In the following lab, we are using a *global* variable, named ```useRed```.
It gets initialized with a value. In the ```main()``` function then we test if it has the value 1, then we blink the red LED.
Otherwise we blink the blue led:

```c
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

``` 
In above example, we are using an ```if``` control, see [if](../controls/if.md).
Experiement and change the variable so it blinks the blue LED.

