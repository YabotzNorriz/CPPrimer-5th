//============================================================================
// Name        : 9.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

int main() {
	int sum {0};
	int count {50};

	while (count <= 100) {
	  sum += count;
	  ++count;
	}

	std::cout << "The sum of the numbers from 50 to 100 is " << sum << std::endl;
	return 0;
}
