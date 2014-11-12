# functions

---

[Back](../instructions.md)

## simple function with return value and two parameters
```c
int sum(int a, int b) { /*
 |   |   |  |   |  |  |
 |   |   |  |   |  |  *-start of function block
 |   |   |  |   |  |
 |   |   |  |   |  *-name of second parameter
 |   |   |  |   |
 |   |   |  |   *-type of second parameter
 |   |   |  |
 |   |   |  *-name of first parameter
 |   |   |
 |   |   *-type of first parameter
 |   |
 |   *-function name
 |
 *-return type */
    return a+b; /*
      |     |
      |     *-return value
      |
      *-return statement -> go back to where function has been called from
    */
}
```

## function prototype
Every function needs to be defined or declared before it is called. 
If the definition schould not be before ex. ```main()``` a function prototype 
can be placed before ```main()```. 
```c 
int sum(int a, int b); /*
 |   |   |  |   |  | |
 |   |   |  |   |  | *-semicolon instead of function block
 |   |   |  |   |  |
 |   |   |  |   |  *-name of second parameter (optional)
 |   |   |  |   |
 |   |   |  |   *-type of second parameter (same as in definition!)
 |   |   |  |
 |   |   |  *-name of second parameter (optional)
 |   |   |
 |   |   *-type of first parameter (same as in definition!)
 |   |
 |   *-function name (same as in definition!)
 |
 *-return type (same as in definition!) */
```
