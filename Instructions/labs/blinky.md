# Blinky
The goal is to blink the LED's on the board.

We have an RGB LED on the board (Red, Green and Blue).
The library has several functions to control the LED. As an example, an extract of the interface for the RED LED is shown (LEDR prefix):

```c
void LEDR_On(void);  /* turns the LED on */
void LEDR_Off(void);  /* turns the LED off */
void LEDR_Neg(void);  /* togles the LED */
```
You can use these functions in your program. But before using it, you need to include the header file (interface) first:
```c
#include "LEDR.h"
```

