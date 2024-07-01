//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

int main()
{
  int sum { 50 };

  for (int i = 50; i < 100; i++)
  {
    sum += i;
  }

  std::cout << "The sum of the numbers from 50 to 100 is " << sum << std::endl;
  return 0;
}
