#include <iostream>

void calci(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        std::cout << a + b << std::endl;
        break;
    case '-':
        std::cout << a - b << std::endl;
        break;
    case '*':
        std::cout << a * b << std::endl;
        break;
    case '/':
        if (b == 0)
        {
            std::cout << "Error: Cannot divide by zero." << std::endl;
        }
        else
        {
            std::cout << a / b << std::endl;
        }
        break;
    default:
        std::cout << "Invalid operator." << std::endl;
        break;
    }
}

int main()
{
    int a, b;
    char op;
    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;
    calci(a, b, op);
    return 0;
}