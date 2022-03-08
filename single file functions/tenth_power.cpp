#include <iostream>
#include <cmath>

// Define tenth_power() here:
int tenth_power(int num){
  int product = 1;
  for(int i=0; i<10; i++){
    product = product * num;
  }
  return product;
}

int main() {
  
  std::cout << tenth_power(0) << "\n";
  std::cout << tenth_power(1) << "\n";
  std::cout << tenth_power(2) << "\n";
  
}