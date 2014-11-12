# bitwise operators

---

[Back](../instructions.md)

Bitwise operators handle every bit inside a variable individually. 
```c
&  /* (a &  b) bitwise and */
|  /* (a |  b) bitwise or */
^  /* (a ^  b) bitwise exclusive or */
~  /* (a ~  b) bitwise not (one's complement) */
<< /* (a << b) shift a left for b bits */
>> /* (a >> b) shift a right for b bits */ /*
|      |       |
|      |       *-description
|      |
|      *-example
|
*-operator
```

| a | b | a & b | a &#124; b | a ^ b |
|:-:|:-:|:-----:|:----------:|:-----:|
| 0 | 0 |   0   |     0      |   0   |
| 0 | 1 |   0   |     1      |   1   |
| 1 | 0 |   0   |     1      |   1   |
| 1 | 1 |   1   |     1      |   0   |

