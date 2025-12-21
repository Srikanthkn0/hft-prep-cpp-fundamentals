#include <iostream>

class FactorialCalculator{
    public:
    void calculatefact(int num){
        if(num < 0) {
            std::cout << "Factorial is not defined for negative numbers." << std::endl;
        }
        else if(num==0 || num==1){
            std::cout << "Factorial of " << num << " is 1" << std::endl;
        }
        else{
            unsigned long long fact=1;
            for(int i=2;i<=num;i++){
                fact*=i;
            }
            std::cout << "Factorial of " << num << " is " << fact << std::endl; 
        }
    }
};

int main(){
    FactorialCalculator fc;
    int num;
    std::cout<<"Enter the number to find the factorial: ";
    std::cin>>num;
    fc.calculatefact(num);
    return 0;
}