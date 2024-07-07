# The While Statement

___

## Overview

The while statement is an loop whose execute the code inside it until a certain condition meets and breaks the loop. Separated in two different loops the **definitive** and the **infinite**. both of them been defined by what is the condition.

### Definitive While

The definitive while is defined by it's conditional, having an explicit condition. Meaning that something has to be fulfilled to be stopped:

```c++
#include <iostream>

int main() 
{
	int num {10};
	int count {0};
	while (count < num) 
	{
		count++;
		std::cout << count << std::endl;
	}	
	return 0;
}
```

The output will be:

```
1
2
3
4
5
6
7
8
9
10
```

### Infinite While

The infinite while is defined by it's conditional, having an `true` as condition. Meaning that something has to break the while loop using the `break` keyword:

```c++
#include <iostream>

int main() 
{
	int num {10};
	int count {0};
	while (true) 
	{
		if (count == num) 
		{
			break;
		}
		count++;
		std::cout << count << std::endl;
		
	}	
	return 0;
}
```

The program will have the same output as the last example, but now, the condition is inside the while and the [[Break and Continue||break]] keyword will break the loop, proceeding to execute the next lines of the code.