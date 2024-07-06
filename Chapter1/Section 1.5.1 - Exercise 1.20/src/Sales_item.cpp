//============================================================================
// Name        : 20.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item book { };

  while (std::cin >> book) {
    std::cout << "Type a book: ";
    std::cout << book << std::endl;
  }

}
