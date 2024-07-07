# Exercises Section 2.1.3

___

**Exercise 2.5:** Determine the type of each of the following literals. Explain the differences
among the literals in each of the four examples:

a) ’a’, L’a’, "a", L"a"
b) 10, 10u, 10L, 10uL, 012, 0xC
c) 3.14, 3.14f, 3.14L
d) 10, 10u, 10., 10e-2

**R:** a) The type is `char` and that type represent a character in the *ASCII* table: The first is just a `char`, the second is an wide character (has more bits than a normal char), the third is an `string` and the forth is an wide string.

b) The type is `int`, and represents an integer number: The first is just a `int`, the second is an `unsigned int`, the third is a `long`, the forth is a `unsigned long`, the fifth is an octal number (because starts with an zero) and the sixth is an hexadecimal (because has an X).

c) The type is `double`, and represents an decimal number: The first is just an `double`, the second is a `float`, the third is a `long double` .

d) The type is floating-point notation, and represents an decimal number: The first is a `int` (even being in that type), the second is an `unsigned double`, the third is a `float` and the forth is a scientific notation.

___

**Exercise 2.6:** What, if any, are the differences between the following definitions:
```c++
int month = 9, day = 7;
int month = 09, day = 07;
```

**R:** The difference is present in the second line, where both of the variables are starting with a 0, which transforms the number into the octal form. When trying to execute the code the compiler will throw up an error, because 09 and 07 don't represent nothing in the octal form. 

___

**Exercise 2.7:** What values do these literals represent? What type does each have?

a) `"Who goes with F\145rgus?\012"`
b) `3.14e1L`
c) `1024f`
d) `3.14L`

**R:** a) The `\145` represents the letter 'e' and `\012` creates a new line.
b) The `3.14e1L` represents `long double` with a scientific notation.
c) The `1024f` represents a `float`.
d) The `3.14L` represents a `long double`.

**Exercise 2.8:** Using escape sequences, write a program to print 2M followed by a newline.
Modify the program to print 2, then a tab, then an M, followed by a newline.

```c++
#include <iostream>

int main()
{
  std::cout << "\062\115\012";
  std::cout << "\062\t\115\012";
  return 0;
}
```

The output will be:

```
2M
2 M

```