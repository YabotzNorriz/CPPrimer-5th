//============================================================================
// Name        : 12.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

int main()
{
  int sum {0};
  for (int i = -100; i <= 100; ++i) {
    sum += i;
    std::cout << sum << std::endl;
  }
  return 0;
}
