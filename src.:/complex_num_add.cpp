#include <iostream>

class ComplexNumber
{
private:
    int real;
    int imag;

public:
    ComplexNumber()
    {
        real = 0;
        imag = 0;
    }

    ComplexNumber(int r, int i)
    {
        real = r;
        imag = i;
    }
    ComplexNumber operator+(ComplexNumber k)
    {
        ComplexNumber temp;
        temp.real = real + k.real;
        temp.imag = imag + k.imag;
        return temp;
    }
    void display()
    {
        std::cout << real << "+" << imag << "i" << std::endl;
    }
};

int main()
{
    ComplexNumber c1(2, 4);
    ComplexNumber c2(5, 3);
    ComplexNumber c3 = c1 + c2;
    std::cout << "Sum of ";
    c1.display();
    std::cout << " and ";
    c2.display();
    std::cout << " is ";
    ;
    c3.display();
    return 0;
}