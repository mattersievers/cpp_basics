#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text){
  for(int i=0; i < text.size(); i++){
    int j = text.size()-1-i;
    if(i >= j){
      return true;
    } else if(text[i] != text[j]){
      return false;
    } 
  }
}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}