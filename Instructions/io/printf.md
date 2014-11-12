# printf()

---

[Back](../instructions.md)

Printing of some text:
```c
printf("Hello World\n");
> Hello World
```

Printing of variables:
```c
int a = 1000;
printf("a is %d\n", a);
> a is 1000
```

## special characters
Some characters can not be printed directly:
```c
Code -> Display
%%      %
\a      [ring]
\b      [backspace]
\f      [new page]
\n      [new line]
\r      [carriage return]
\t      [tabulator]
\v      [vertical tabulator]
\'      '
\"      "
\\      \
```

## placeholders
Some often used placeholders:
```c
%d, %i  signed integer
%u      unsigned integer
%o      unsigned integer (octal representation)
%x, %X  unsigned integer (hexadecimal representation)
%f      float
%c      character
%s      string
```
