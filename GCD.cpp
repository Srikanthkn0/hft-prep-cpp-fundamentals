#include <iostream>

int main(){
    int a,b;
    std::cout<<"Enter two numbers: ";
    std::cin>>a>>b;
    while(b!=0){
        int remainder = a % b;
        a=b;
        b=remainder;
    }
    std::cout<< "GCD is: "<<a<<std::endl;
    return 0;

}