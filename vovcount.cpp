#include <iostream>
#include <string>
#include "String_function/string_utils.h" // inbulit library

int main()
{
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    std::string fin = toLower(str);
    int vow = 0, cons = 0;

    for (int i = 0; i < fin.length(); i++)
    {
        char c = fin[i];

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            vow++;
        }
        else if (c >= 'a' && c <= 'z')
        {
            cons++;
        }
    }
    std::cout << "Vowels: " << vow << std::endl;
    std::cout << "Consonants: " << cons << std::endl;

    return 0;
}