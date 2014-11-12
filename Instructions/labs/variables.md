# Integral Variables

---

[Zurück](../instructions.md)

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


