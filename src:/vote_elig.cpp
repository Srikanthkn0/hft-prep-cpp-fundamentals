#include <iostream>

void elig(int age){
    if (age>=18){
        std::cout<<"Eligible to vote"<<std::endl;
    }
    else{
        std::cout<<"Not eligible to vote"<<std::endl;
    }
    }
int main(){
    int age;
    std::cout<<"Enter the age: ";
    std::cin>>age;
    elig(age);
    return 0;
}