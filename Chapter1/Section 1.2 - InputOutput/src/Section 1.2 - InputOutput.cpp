//============================================================================
// Name        : 2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

int main()
{
  std::cout << "Enter Two Numbers:" << std::endl;
  int v1 { 0 }, v2 { 0 };
  std::cin >> v1 >> v2;
  std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2
      << std::endl;
  return 0;
}
