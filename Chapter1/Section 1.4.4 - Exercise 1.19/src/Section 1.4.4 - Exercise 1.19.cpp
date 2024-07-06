#include <iostream>

int main()
{
  int num1 { 0 }, num2 { 0 }, range { 0 };
  std::cout << "Enter two numbers: " << std::endl;
  std::cin >> num1 >> num2;
  range = num1;

  // Executes until the user types the first number smaller than the second number
  do {
    if (num1 > num2) {
      std::cout << "The first number should be smaller than the second number!"
          << std::endl;
    }
    else {
      while (range < num2) {
        std::cout << range << std::endl;
        ++range;
      }
    }
  } while (num1 > num2);

}
