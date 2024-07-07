# Exercises Section 2.2.1

___

**Exercise 2.9:** Explain the following definitions. For those that are illegal, explain
what’s wrong and how to correct it.

a) `std::cin >> int input_value;`
b) `int i = { 3.14 };`
c) `double salary = wage = 9999.99;`
d) `int i = 3.14;`

**R:** a) Tries to read an input to the variable `input_value`. It's not possible to use `std::cin` to read from a newly created variable, and the variable isn't initialized, getting a syntax error.
b) Creates a `int` called `i` and initialized, wrongly, the value 3.14. The use of an assign operator `=` and an list initializer is wrong, the correct way should be `int i {3.14}`, even the number not being an int it will be evaluated to 3.
c) Creates two `double` called `salary` and `wage` and initialize, only, `wage`. The double assignment is made with `salary` receiving the value of `age` which is uninitialized during the assignment, putting an empty value into `salary` and only afterwards receiving a value, in that case being 9999.9.
d) Creates a `int` called `i` and initialized the value 3.14. The assignment of an `double` into a int will not invoke errors, but is illegal.

___

**Exercise 2.10:** What are the initial values, if any, of each of the following variables?

```c++
std::string global_str;
int global_int;
int main()
{
  int local_int;
  std::string local_str;
}
```

**R:** The initial value of `global_str` is simply `""`, also applying to `local_str`. The `global_int` is initialized to 0 and `local_int` is changed to 0, but still don't wields any value.
