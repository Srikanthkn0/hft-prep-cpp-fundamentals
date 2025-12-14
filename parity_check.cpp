// Parity checker
#include <iostream>

int main() {
  int num;
  std::cout << "Enter the number: ";
  std::cin >> num;

  if (num == 0) {
    std::cout << "Neither";
  } else if (num % 2 == 0) {
    std::cout << "Number is even";
  } else {
    std::cout << "Number is odd";
  }
  return 0;
}