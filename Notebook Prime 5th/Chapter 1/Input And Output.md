# Output

The input is how things appears as a answer to an code. To print things to the user the most basic command comes from the `std::cout` he comes from the default library for input and output of the `iostream`, specifically the `ostream`, being the part of `iostream` that handles the output streams. 

# Input

So, we also have an command to the input of data to an [[Variable||variable]], `std::cin` is the representation of the `istream` the part of `iostream` that handle keyboard inputs.

## Extraction operator

Represented by two minor operator `>>` indicates that something is being extraction, in the case of the `std`, we are using `std::cin` to extract something of the keyboard into a variable:

```c++
#include <iostream>

int main()
{
	int number {0};
	std::cout >> "Enter a number: ";
	std::cin >> number;
	std::cout << number << std::endl;
	return 0;
}
```

In case the user types '13' in their keyboard they will see the following output:

```
13
```

## Insertion operator

Represented by two greater operator `<<` indicates that something is being injected in a output, in the case of the `std`, we are using `std::cout` to insert something into the default output of the system, the **console**:

```c++
#include <iostream>

int main()
{
	std::cout << "Hello World!" << std::endl;
	return 0;
}
```

The user cannot type anything and the program will display the following output:

```
Hello World!
```
