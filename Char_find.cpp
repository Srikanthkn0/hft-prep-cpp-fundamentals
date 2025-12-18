#include <iostream>
#include <string>

int main()
{
    std::string str;
    int index;
    char target;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Enter the character to find: ";
    std::cin >> target;
    bool found = false;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == target)
        {
            found = true;
            index = i;
            break;
        }
    }
    if (found)
    {
        std::cout << "Character: " << target << " found at index " << index << std::endl;
    }
    else
    {
        std::cout << "Character not found" << std::endl;
    }
    return 0;
}