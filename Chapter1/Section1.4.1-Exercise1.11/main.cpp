
#include <iostream>

int main()
{
  int num1 { 0 }, num2 { 0 }, range { 0 };
  std::cout << "Enter two numbers: " << std::endl;
  std::cin >> num1 >> num2;
  range = num1;
  while (range < num2)
  {
    std::cout << range << std::endl;
    ++range;
  }
  return 0;
}
