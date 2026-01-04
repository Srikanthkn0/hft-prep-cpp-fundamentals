
#include <iostream>

int main() {
  int num, num1, fin = 0;
  char op;
  bool running = true;

  std::cout << "Enter the number: ";
  std::cin >> num;

  while (running) {
    std::cout << " Enter the operator (+, -, *, /) or 'q' to quit: ";
    std::cin >> op;

    if (op == 'q') {
      running = false;
      break;
    }

    std::cout << "Enter the 2nd number: ";
    std::cin >> num1;

    bool success = true;

    switch (op) {
    case '+':
      fin = num + num1;
      break;
    case '-':
      fin = num - num1;
      break;
    case '*':
      fin = num * num1;
      break;
    case '/':
      if (num1 == 0) {
        std::cout << "Error: Cannot divide by zero.\n";
        success = false;
      } else {
        fin = num / num1;
      }
      break;
    default:
      std::cout << "Invalid operator.\n";
      success = false;
      break;
    }

    if (success) {
      num = fin;
      std::cout << "Result: " << fin << "\n";
    }
  }
  return 0;
}
