#include <iostream>

int main() {
  std::cout << "Greetings! Please enter your Earth weight (number only)?\n";
  double weightEarth;
  std::cin >> weightEarth;
  
  std:: cout << "Please enter the NUMBER for the planet you are visiting.\n 1.Mercury\n 2.Venus\n 3.Mars\n 4.Jupiter\n 5.Saturn\n 6.Uranus\n 7.Neptune\n";
  int planetNumber;
  std::cin >> planetNumber;
  double weightOther = 0;

  switch(planetNumber) {
    case 1:
        weightOther = weightEarth * 0.38;
        std::cout << "Your weight on Mercury is " <<  weightOther << "\n"; 
        break;

    case 2:
        weightOther = weightEarth * 0.91;
        std::cout << "Your weight on Venus is " <<  weightOther << "\n"; 
        break;

    case 3:
        weightOther = weightEarth * 0.38;
        std::cout << "Your weight on Mars is " <<  weightOther << "\n"; 
        break;

    case 4:
        weightOther = weightEarth * 2.34;
        std::cout << "Your weight on Jupiter is " <<  weightOther << "\n"; 
        break;

    case 5:
        weightOther = weightEarth * 1.06;
        std::cout << "Your weight on Saturn is " <<  weightOther << "\n"; 
        break;

    case 6:
        weightOther = weightEarth * 0.92;
        std::cout << "Your weight on Uranus is " <<  weightOther << "\n"; 
        break;

    case 7:
        weightOther = weightEarth * 1.19;
        std::cout << "Your weight on Neptune is " <<  weightOther << "\n"; 
        break;
    default:
        std::cout << "Selection not understood\n Please try again\nBe sure to enter only a NUMBER.\n";
        break;
  }
}