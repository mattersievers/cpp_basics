#include <iostream>
#include <vector>

using namespace std;

int main() {
  
  vector<int> number_list;
  int temp = 1;
  
  //loops input to create vector until "0" is input
  while(temp != 0){
    cout << "Please input a non-zero integer to start building the vector. Input 0 to continue to calculations.\n";
    cin >> temp;
    if(temp !=0){
      number_list.push_back(temp);
    }
  }
  

  int sum_even = 0;
  int product_odd = 1;

  //loops through the number list
  cout << "The number list is: { ";
  for(int i=0; i<number_list.size(); i++){
    cout << number_list[i];
    
    //outputs the set symbols for the number list
    if(i < number_list.size()-1){
    cout << ", ";  
    } else { cout << " }\n";}
    
    //calculates the sum of even and product of odds
    if(number_list[i]%2 == 0){
      sum_even = sum_even + number_list[i]; 
    }else{
      product_odd = product_odd * number_list[i];
    }
  }

  cout << "Sum of even numbers is " << sum_even << ".\n";
  cout << "Product of odd numbers is " << product_odd << ".\n";
}