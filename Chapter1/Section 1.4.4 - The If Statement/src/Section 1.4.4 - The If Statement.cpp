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
  // current_val is the number we're counting; we'll read new values into val
  int current_val { 0 }, val { 0 };
  // read first number and ensure that we have data to process
  if (std::cin >> current_val)
  {
    int cnt { 1 };
    while (std::cin >> val)
    {
      if (val == current_val)
      {
        ++cnt;
      }
      else
      {
        std::cout << current_val << " occurs " << cnt << " times" << std::endl;
        current_val = val;
        cnt = 1;
      }
    }
    std::cout << current_val << " occurs " << cnt << " times" << std::endl;
  }
  return 0;
}
