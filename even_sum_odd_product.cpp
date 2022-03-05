#include <iostream>
#include <vector>

int main() {
  std::vector<int> number_list = {2, 4, 3, 6, 1, 9};

  int sum_even = 0;
  int product_odd = 1;

  for(int i=0; i<number_list.size(); i++){
    if(number_list[i]%2 == 0){
      sum_even = sum_even + number_list[i]; 
    }else{
      product_odd = product_odd * number_list[i];
    }
  }
  std::cout << "Sum of even numbers is " << sum_even << ".\n";
  std::cout << "Product of odd numbers is " << product_odd << ".\n";
}