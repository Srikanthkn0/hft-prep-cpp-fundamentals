#include <iostream>
#include "string_utils.h"

int main(){
    std::string str;
    std::cout<<"Enter a string: ";
    std::getline(std::cin,str);
    std::cout<<"Uppercase: "<<toUpper(str)<<std::endl;
    std::cout<<"Lowercase: "<<toLower(str)<<std::endl;

    return 0;
}