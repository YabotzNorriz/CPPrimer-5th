#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item book1 { }, book2 { }, sum_books { };
  int num_books { 0 };

  do {
    std::cout << "Enter the number of books: ";
    std::cin >> num_books;
    if (num_books < 0) {
      std::cout << "Enter a number higher than 0" << std::endl;
    }

  } while (num_books < 0);

  for (int i = 1; i <= num_books; ++i) {
    if (i == 1) {
      std::cout << "Enter the book: ";
      std::cin >> book1;
      sum_books = book1;
    } else {
      std::cout << "Enter the book: ";
      std::cin >> book1;
      sum_books += book1;
    }

  }

  std::cout << sum_books << std::endl;
  return 0;
}

