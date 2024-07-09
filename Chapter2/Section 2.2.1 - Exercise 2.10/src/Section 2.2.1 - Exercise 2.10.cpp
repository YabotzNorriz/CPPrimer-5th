//============================================================================
// Name        : 10.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

std::string global_str;
int global_int;

int main()
{
  int local_int;
  std::string local_str;

  std::cout << global_str << std::endl;
  std::cout << local_str << std::endl;
  std::cout << global_int << std::endl;
  std::cout << local_int << std::endl;
  return 0;
}
