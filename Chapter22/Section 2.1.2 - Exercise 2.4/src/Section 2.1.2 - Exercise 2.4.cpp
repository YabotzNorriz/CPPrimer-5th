//============================================================================
// Name        : 4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

int main()
{
  unsigned u = 10, u2 = 42;
  // It's 42 - 10, even being unsigned, will result in 32, so true
  std::cout << u2 - u << std::endl;
  // It's 10 - 42, they are unsigned and unsigned can't be negative,
  // the result should be -32, being converted to -1 and them to a positive big number
  std::cout << u - u2 << std::endl;
  // Signed int, so the following lines will be true
  // and the results will be expected
  int i = 10, i2 = 42;
  // Results in 32
  std::cout << i2 - i << std::endl;
  // Results in -32
  std::cout << i - i2 << std::endl;
  // Results in 0, even being converted to unsigned
  std::cout << i - u << std::endl;
  // Results in 0, even being converted to unsigned
  std::cout << u - i << std::endl;
  return 0;
}
