# Guess The Number

---

[Back](../instructions.md)

# Introduction
In this lab we apply what we have learned so far
* [```while```](../controls/while.md)
* [```do-while```](../controls/do-while.md)
* [```for```](../controls/for.md)
* [```functions```](../functions/functions.md)

Use above links to refresh your mind as necessary. For this we implement a small game: *Guess The Number*!
The program will pick a random number, and the user has to guess which number it is. 
The program will help the user telling him if his guess was too high or too low.
The user only has a limited number of trials to guess the number.

# Program Flow
The program will have the following flow:
* The program generates a secret random number, from zero to a given maximum.
* Then it loops up to a given limit (number of trials)
* It asks the user for his input number (guess) and reads that number
* The program checks if the number is within the boundary
* If the number is smaller then the secret number or higher, the user gets that information
* If the user finds the number within the number of trials, the user wins
* Otherwise the program wins
* Then it starts the game all again

# main() Loop
As the game is repeated, we can use an endless loop in ```main()```:
```c
int main(void) {
  PE_low_level_init();

  /* Write your code here */
  for(;;) {
    GuessTheNumber(100, 5);
  }
  /* do not leave main()! */
  return 0;
}
```
The game itself is in 
```c
void GuessTheNumber(int maxVal, int nofTries);
```
The first parameter tells the number range (from 0 to ```maxVal```).
The second parameter ```nofTries``` specifies how many tries are allowed.

# Guess The Number
You are going to implement that function. The general flow is:
* Write a welcome message
* Determine the random secret number
* Inside a loop
  * Ask the user for a number
  * Check that the number is within the limits
  * Tell the user if number found, smaller or larger than the secret number
* If the user needs less trials than ```nofTries```, the user wins, otherwise the program wins
* return to the caller ```main()``` and repeat the game.

# Example Game Session
```
------------------------------
Guess The Number Game
------------------------------
Guess the secret number between 0 and 100. You can guess 5 times!
Trial 1 of 5: Enter number:

30
*** Your guess was too low!
Trial 2 of 5: Enter number:

60
*** Your guess was too high!
Trial 3 of 5: Enter number:

45
*** Your guess was too high!
Trial 4 of 5: Enter number:

38
*** Your guess was too high!
Trial 5 of 5: Enter number:

35
*** Your guess was too high!
*** You lost! The secret number was 33
```

# Proposed Function Flow
Below is a possible outline of the function ```GuessTheNumber()```

```c
void GuessTheNumber(int maxVal, int nofTries) {
  int secretNumber, val;
  int i;

  /* use printf() to write welcome message */
  /* get random secret number with rand() */
  /* limit secret number with modulo % operation */
  /* loop for nofTries times.... */
    /* ask user for number with readNumber() */
    /* check if number is within 0..maxVal */
    /* check if number is too low */
    /* check if number is too high */
    /* else: it must be the secret number! */
  /* end loop */
}
```
Use ```printf()``` to inform the user about the progress and result of the game!

# Reading Numbers
For this we can use what we had in the lab using ```scanf()```:
```c
/* Read a number from the console and return it */
int readNumber(void) {
  int res, number;

  printf("Enter number:\r\n");
  res = scanf("%d", &number);
  while('\n' != getchar()); /* skip rest of input until '\n' */
  if (res==1) { /* one value read */
    return number;
  } else {
    printf("ERROR: Wrong number input!\r\n");
    return -1;
  }
}
```

# Random Number
The library comes with a random number generator:
```c
#include <stdlib.h>

int rand(void);
```
The function returns a random ```int``` number:
```c
  int secretNumber;
  
  secretNumber = rand(); /* get random number */
```
To fit it into the desired range, the modulo ```%``` operator can be used:
```c
secretNumber %= maxVal; /* make it inside limits (0..maxVal) */
```

# Lab Task
Implement the 'Guess The Number' game and pass it to your friends!
    
# Summary
To implement the 'Guess The Number' game, we can apply several things we have learned so far,
including using variables, functions, loops and many more.

# Ideas
Further ideas to improve the program:
* Let the user decide if he wants to play the game again
* Blink the LED's if the user has lost (or won)
* Let the user input the maximum number (range)
* Let the user input the number of trials
