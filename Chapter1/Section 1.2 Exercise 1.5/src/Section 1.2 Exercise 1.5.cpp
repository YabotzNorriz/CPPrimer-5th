//============================================================================
// Name        : 5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 *We wrote the output in one large statement. Rewrite the program to use
 *a separate statement to print each operand.
 */
#include <iostream>

int main()
{
  std::cout << "Enter Two Numbers:" << std::endl;
  int v1 { 0 }, v2 { 0 };
  std::cin >> v1 >> v2;
  std::cout << "The sum of ";
  std::cout << v1;
  std::cout << " and ";
  std::cout << v2;
  std::cout << " is ";
  std::cout << v1 + v2 << std::endl;
  return 0;
}