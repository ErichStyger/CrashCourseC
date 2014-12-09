# Loops

---

[Back](../instructions.md)

# Introduction
An essential thing of programs is that they can loop around the code. In this lab we explore three different variants of loops:
* [```while```](../controls/while.md)
* [```do-while```](../controls/do-while.md)
* [```for```](../controls/for.md)
For a brief overwiew, check the above links.

# ```while``` Loops
There are two variants of the while loop
```c
while(condition) {
  /* some code here */
}
```
and
```c
do {
  /* some code here */
} while(condition);
```
The difference is only in which place the ```condition``` is checked: either at the the beginning of the loop or at the end.
As long as the condition is ```TRUE``` (```!=0```), the program will loop inside the loop construct.

## ```while``` Examples

The following ```do-while``` loop increments a variable ```i``` as long it is smaller than 3:
```c
int i;

i = 0;
do {
  printf("i: %d\r\n", i);
  i++;
} while(i<3);
```
It will print
```
i: 0
i: 1
i: 2
```
The same thing can be implemented with a ```while``` loop:
```c
int i;

i = 0;
while (i<=4) {
  printf("i: %d\r\n", i);
  i++;
}
```
which prints
```
i: 0
i: 1
i: 2
i: 3
i: 4
```
So the difference is:
* The ```while``` loop will iterate either zero or N time.
* The ```do-while``` loop will iterate at least one time.
An endless loop can be written as:
```c
while (1) {
  /* endless loop */
}
```
or as:
An endless loop can be written as:
```c
do {
  /* endless loop */
} while(1);
```


# ```for``` Loop
In the previous example, we have intialized a variable outside the loop, then checked the condition and changed the variable inside the loop:
```c
<initialization>
while (<condition>) {
  /* some statements here */
  <change>
}
```
Because such a ```while``` loop is so common in programs, there is another form which combines the ```<initialization>```, ```<change>``` and ```<condition>```: the for loop.
```c
for(<initialization>;<condition>;<change>) {
  /* some statements here */
}
```
Unlike in the ```while```, the condition can be empty. 
Actually one or more part of the ```for``` loop can be empty. So a simple endless loop can be written as
```c
for(;;) {
  /* endless loop */
}
```

# ```break```
Sometimes it is useful to get out of a loop. For this, the ```break``` statement can be used. ```break``` will exit the surrounding ```for```, ```while``` or ```do-while``` loop:
```c
int i, sum;

sum = 0;
for(i=0;i<5;i++) {
  sum += i;
  printf("i: %d, sum: %d\r\n", i, sum);
  if (sum==3) {
    printf("break!\r\n", i, sum);
    break;
  }
}
printf("loop end!\r\n", i, sum);
```
Will print
```
i: 0, sum: 0
i: 1, sum: 1
i: 2, sum: 3
break!
loop end!
```

# ```continue```
With ```continue``` the loop will execute again the <condition> part of the loop.
```c
int i, sum;

sum = 0;
for(i=0;i<5;i++) {
  sum += i;
  printf("i: %d, sum: %d\r\n", i, sum);
  if (sum>10) {
    printf("break!\r\n", i, sum);
    break;
  }
  if (i==3) {
    printf("continue!\r\n", i, sum);
    continue;
  }
}
printf("loop end!\r\n", i, sum);
```
Will print
```
i: 0, sum: 0
i: 1, sum: 1
i: 2, sum: 3
i: 3: sum: 5
continue!
i: 3: sum: 8
continue!
i: 3: sum: 11
break!
loop end!
```

# Lab
What is the value of ```i``` after completion of the following loops:
```c
int i;
for(i=0;i<10;i++) {
}
```
```c
int i;
for(i=10;i>2;i--) {
}
```
```c
int i=17;
do {
  i--;
  if (i==10) {
    break;
  }
} while(i>=3);
```
```c
int i=2;
while(i>5) {
  i++;
}
```

Try the loops with your board and print the number. Does it match what your own result?
Congratulations, you are using different forms of loops!

# Summary
There are different ways to loop a program: ```do-while```, ```while``` or ```for``` loops. 
With ```break``` it is possible to leave the surrounding loop. With ```continue``` execution continues with the condition of the surrounding loop.
