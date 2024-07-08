#include <iostream>

int main(int argc, char **argv)
{
	std::cout << "Enter one number:" << std::endl;
  int v1{0}, v2{0};
  std::cin >> v1;
  std::cout << "Enter another number:" << std::endl;
  std::cin >> v2;
  std::cout << "The multiplication of " << v1 << " and " << v2 << " is " << v1 * v2 << std::endl;
	return 0;
}
