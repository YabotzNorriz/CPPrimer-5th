//============================================================================
// Name        : 21.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item book1 { }, book2 { };
  std::cout << "Write an book from the bookstore: ";
  std::cin >> book1;

  std::cout << "Write another book from the bookstore with the same IBSN: ";
  std::cin >> book2;

  if (book1.isbn() == book2.isbn()) {
    std::cout << "The sum of the books is: " << book1 + book2 << std::endl;
  } else {
    std::cout << "The books don't have the same IBSN" << std::endl;
  }
  return 0;
}
