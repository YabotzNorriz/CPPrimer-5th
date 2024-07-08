---
creation date: 2024-07-08 20:01
modification date: Monday 8th July 2024 20:01:20
---
# Exercises Section 2.2.4

___


**Exercise 2.13:** What is the value of j in the following program?

```c++
int i = 42;
int main()
{
  int i = 100;
  int j = i;
}
```

**R:** The value of `j` in the program is: 100

**Exercise 2.14:** Is the following program legal? If so, what values are printed?

```c++
int i = 100, sum = 0;
for (int i = 0; i != 10; ++i)
  sum += i;
std::cout << i << " " << sum << std::endl;
```


