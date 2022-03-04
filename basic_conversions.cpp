#include <iostream>

int main() {
  std::cout << "The weight on Earth is (number only, no units): \n";
  double weight;
  std::cin >> weight;
  double weightMars = weight * 0.37942286122;

  std::cout << "The weight on mars is " << weightMars << "\n";

  std::cout << "The distance in miles is (number only, no units): \n";
  double length;
  std::cin >> length;
  double lengthKilos = length * 1.60934;

  std::cout << "The distance in kilometers is " << lengthKilos << "\n";
}