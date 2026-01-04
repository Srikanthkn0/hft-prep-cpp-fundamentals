#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    char dup[100];
    int idx = 0;

    for (int i = 0; i < str.length(); i++)
    {
        bool isdup = false;
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                isdup = true;
                break;
            }
        }
        if (isdup)
        {
            bool alreadyStored = false;
            for (int k = 0; k < idx; k++)
            {
                if (dup[k] == str[i])
                {
                    alreadyStored = true;
                    break;
                }
            }
            if (!alreadyStored)
            {
                dup[idx++] = str[i];
            }
        }
    }
    if (idx == 0)
    {
        std::cout << "No duplicates found" << std::endl;
    }
    else
    {
        std::cout << "The duplicates are : ";
        for (int i = 0; i < idx; i++)
        {
            std::cout << dup[i] << " ";
        }
    }
    return 0;
}