# scanf()

---

[Back](../instructions.md)

With ```scanf()``` you can read in text or numbers using a formatting string, similar to ```printf()```.

Read in some some text:
```c
char buffer[32];
scanf("Please enter a word: %s", &buffer[0]);
printf("\nYou entered: '%s'\r\n", &buffer[0]); 
```

Reading of variables:
```c
int a;
scanf("Enter a number: %d", &a);
printf("You entered: %d", a);
```

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
%s      string
```

## return value
```scanf()``` returns an int as result which holds the number of read placeholders.
