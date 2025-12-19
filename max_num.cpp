#include <iostream>

int max(int a, int b){
    return (a > b) ? a : b;
}

int main(){
    int a,b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    int maximum = max(a, b);
    std::cout << "The maximum number is: " << maximum << std::endl;
    return 0;
}