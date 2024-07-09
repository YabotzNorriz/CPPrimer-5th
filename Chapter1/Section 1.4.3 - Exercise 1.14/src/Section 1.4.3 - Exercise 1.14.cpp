//============================================================================
// Name        : 14.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

int main()
{
  int sum { 0 }, value { 0 };
  std::cout << "Enter a value: " << std::endl;
  while (std::cin >> value)
  {
    sum += value;
    std::cout << "Enter a value: " << std::endl;
  }
  std::cout << "Sum is: " << sum << std::endl;
  return 0;
}
