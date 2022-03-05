#include <iostream>

int main() {
  std::cout << "Please input the year.\n";
  int year;
  std::cin >> year;

  double digit_count = year/1000;

  if( digit_count >=1 && digit_count < 10) {
    int leap_remainder = year % 4;
    if( leap_remainder == 0){
      int century_remainder = year % 100;
      int four_cent_rem = year % 400;
      if( century_remainder == 0 && four_cent_rem != 0) { std::cout << "The year is not a leap year.";} else{std::cout << "The year is a leap year.";}


  }else{
    std::cout << "The year is not a leap year.";
  }

  } else{
    std::cout << "Please try again.\n Be sure to input a FOUR DIGIT number for the year.";
  } 
}