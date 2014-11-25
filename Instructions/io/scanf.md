# scanf()

---

[Back](../instructions.md)

With ```scanf()``` you can read in text or numbers using a formatting string, similar to [```printf()```](printf.md).

Example how to read in some text:
```c
char buffer[32];
printf("Please enter a word:\r\n");
scanf("%s", &buffer[0]);
printf("\nYou entered: '%s'\r\n", &buffer[0]);

> Please enter a word: 
> hello
> You entered: 'hello'
```

Reading of variables:
```c
int a;
printf("Enter a number:\r\n");
scanf("%d", &a);
printf("You entered: '%d'", a);

> Enter a number: 
> 35
> You entered: '35'
```

Note that for ```scanf()``` the argument list after the formatting string are always pointer to variables. This because ```scanf()``` need to write into that variable, and therefore needs to know the address of it.

## placeholders
Some often used placeholders:
```c
%c      character
%d, %i  signed integer
%u      unsigned integer
%o      unsigned integer (octal representation)
%x, %X  unsigned integer (hexadecimal representation)
%f      float
%c      character
%s      string (character sequence until the first tab/newline/space)
```

## return value
```scanf()``` returns an int as result which holds the number of read placeholders.
This is useful to check against the actual paramters entered.
