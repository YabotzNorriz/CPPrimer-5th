//============================================================================
// Name        : 3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

int main()
{
  int sum { 0 }, value { 0 };
  // read until end-of-file, calculating a running total of all values read
  while (std::cin >> value)
  {
    sum += value;
  }
  std::cout << "Sum is: " << sum << std::endl;
  return 0;
}
