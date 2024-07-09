//============================================================================
// Name        : 23.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item total { };
  int same_isbn { 1 };

  // Receives a major transaction to be the comparable
  if (std::cin >> total)
  {
    Sales_item book { };
    // Goes trough asking a new transaction until something with a different isbn enters
    while (std::cin >> book)
    {
      if (total.isbn() == book.isbn())
      {
        same_isbn++;
      } else
      {
        std::cout << "The following ISBN " << total.isbn() << " appeared "
            << same_isbn << " times" << std::endl;
        same_isbn = 0;
      }
    }
  } else
  {
    std::cout << "Invalid data!" << std::endl;
    return -1;
  }
  return 0;
}
