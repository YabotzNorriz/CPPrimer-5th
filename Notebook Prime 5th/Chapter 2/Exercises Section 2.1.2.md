
**Exercise 2.3:** What output will the following code produce?

```c++
unsigned u = 10, u2 = 42;
std::cout << u2 - u << std::endl;
std::cout << u - u2 << std::endl;
int i = 10, i2 = 42;
std::cout << i2 - i << std::endl;
std::cout << i - i2 << std::endl;
std::cout << i - u << std::endl;
std::cout << u - i << std::endl;
```

**R:** The output will be:

```
32
4294967264
32
-32
0
0
```

___

**Exercise 2.4:** Write a program to check whether your predictions were correct. If not,
study this section until you understand what the problem is.

**R:** The program executed the way i predicted, and the following comments will be explaining:

```c++
unsigned u = 10, u2 = 42;
// It's 42 - 10, even being unsigned, will result in 32, so true
std::cout << u2 - u << std::endl;
// It's 10 - 42, they are unsigned and unsigned can't be negative, the result 
// should be -32, being converted to -1 and them to a positive number
std::cout << u - u2 << std::endl;
// Signeds int, so the following lines will be true
// and the results will be espected
int i = 10, i2 = 42;
// Results in 32
std::cout << i2 - i << std::endl;
// Results in -32 
std::cout << i - i2 << std::endl;
// Results in 0, even being converted to unsigned
std::cout << i - u << std::endl;
// Results in 0, even being converted to unsigned
std::cout << u - i << std::endl;
```

