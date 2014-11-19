# For Loop

---

[Back](../instructions.md)

```c
for(init; condition; count) {
    doLoop();
}
```

Example:
```c
int i;

for(i=0; i<5; i++) {
    printf("i=%d\r\n", i);
}
```
produces:
```
i=0
i=1
i=2
i=3
i=4
```

The initialization, the condition and the count each can be empty too.
For example to write an endless loop, it can be written as:
```c
int i;

for(;;) {
  /* endless loop */
}
```
