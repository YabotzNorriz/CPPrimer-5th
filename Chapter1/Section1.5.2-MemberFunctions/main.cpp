//============================================================================
// Name        : 2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item item1 { }, item2 { };
  std::cin >> item1 >> item2;

  if (item1.isbn() == item2.isbn())
  {
    std::cout << "The sum of the books is: " << item1 + item2 << std::endl;
    return 0;
  } else
  {
    std::cout << "The books don't have the same IBSN" << std::endl;
    return -1;
  }

}
