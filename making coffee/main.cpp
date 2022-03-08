#include <iostream>

#include "coffee.hpp"

/*
The purpose of this lesson is to assign default values to function input variables and call them ONLY when they are needed.
This practice throws a "Problem" in VSCode, but still seems to compile and execute correctly with the extension.
*/

int main() {
  
  // coffee black
  std::cout << make_coffee();
  
  // coffee with milk
  std::cout << make_coffee(true);
  
  // coffee with milk and sugar
  std::cout << make_coffee(true, true);
  
  // coffee with sugar
  std::cout << make_coffee(false, true);
  
}