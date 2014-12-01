# Functions

---

[Back](../instructions.md)

# Introduction
A common practice in programming is 'divice and conquer': to solve a bigger problem with smaller functions.
This does not only increase readability of the source code, it makes things more modular as functions can be used from differerent places.

See [```functions```](../functions/functions.md) how functions are used.

# Function Anatomy
In general, functions are defined like this:
```c
<linkage> <returnType> <functionName> (<listOfParameters>) {
  <functionBody>
}
```
* <linkage>: This defines the 'visibility' of the function. If it is ```static```, it means that the function is only visible inside that source file. If ```static``` is omitted, then other source files (or modules) can use that function too.
* <returnType>: Functions can (or cannot) return a value, e.g. a result. If a function does not return anything, then (```void```) is used. Otherwise it has a single return type (e.g. ```int```). The return value is returned with a ```return``` inside the <functionBody>
* <functionName>: Each function has a name, which needs to be different from other function names. Only the function is ```static```, then this rule only applies to the current source file, and not for all source files in the program. Function names need to start with a letter.
* <listOfParameters>: If no parameters are used, then the list only has ```void```. Otherwise it is a comma separeted list of types followed by the parameter name.
* <functionBody>: This is the source code of the function. A function can use the ```return``` statement to return to the caller (the code who called that function). A function return value has to use the ```return``` for the return value.

## Examples

The following function increments a global variable everytime ```foo()``` gets called:
```c
int var;
void foo(void) {
  var++;
}
```

The following function returns the sum of two parameters:
```c
int sum(int a, int b) {
  return a+b;
}
```

The following function divides two parameters, and checks for division by zero:
```c
int divide(int a, int b) {
  if (b==0) { /* ups! that would be division by zero! */
    return 0;
  } else {
    return a/b;
  }
}
```
The above functions use 'by value' parameters: If using 'by reference' (or pointer parameters), then I can pass back other values.
For example if I want to tell the caller that a division by zero happened, I can pass this back with a pointer:
```c
int divide(int a, int b, int *isDivisionByZero) {
  if (b==0) { /* ups! that would be division by zero! */
    *isisDivisionByZero = 1; /* is division by zero */
    return 0;
  } else {
    *isisDivisionByZero = 0; /* no division by zero */
    return a/b;
  }
}
```

# Using functions
To use function, simply use the name followed by parameters in the parenthesis ```()```.

Examples:
```c
void foo(void) {
  /* ... */
}

void main(void) {
  /* ... */
  foo();
  /* ... */
}
```

```c
void paramFunc(int a) {
  /* ... */
}

void main(void) {
  /* ... */
  paramFunc(4);
  /* ... */
}
```

```c
int returnFunc(void) {
  /* ... */
}

void main(void) {
  int result;
  /* ... */
  result = resultFunc();
  /* ... */
}
```

```c
int multiply(int a, int b) {
  /* ... */
}

void main(void) {
  int result;
  /* ... */
  result = multiply(5, 6);
  /* ... */
}
```

# Lab
In this lab, we implement a function which reads two numbers from the user, and then divides them:
First, we implement the ```divide()``` function which divides
```c
/* Divides two numbers (dividend/divisor) and returns the result. In case of division by zero,
 * *isDivisionByZero is set to 1, otherwise to 0.
 */
int divide(int dividend, int divisor, int *isDivisionByZero) {
  if (divisor==0) {
    *isDivisionByZero = 1; /* is division by zero */
    return 0;
  } else {
    *isDivisionByZero = 0; /* is division by zero */
    return dividend/divisor;
  }
}
```

Because we have to read in two numbers, we create a ```readNumber()``` function. This function reads in a number and returns it:
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
    return 0;
  }
}
```

Next, we call it from ```main()```:
```c
int main(void) {
  PE_low_level_init(); /* low level driver initialization, do not remove */

  for(;;) {
    int dividend, divisor, result, isDivisionByZero;

    dividend = readNumber();
    divisor = readNumber();
    result = divide(dividend, divisor, &isDivisionByZero);
    if (isDivisionByZero) {
      printf("ERROR: Division by zero!\r\n");
    } else {
      printf("Result: '%d'\r\n", result);
    }
  } /* for */
  /* do not leave main! */
  return 0;
}
```

# Summary
With functions complex or large problems can be implemented in smaller pieces. Functions can have return values, and list of parameters.
If a function does return a value, the ```return``` statement is needed. If functions are ```static```, then they are only visible inside their own source file.
 
# Ideas
* Extend the example to multiply the two numbers.
* Implement a better error handling (no or wrong numbers entered).
* Handle the division by zero check before calling ```divide()```.