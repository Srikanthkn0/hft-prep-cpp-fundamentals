#include <iostream>

class NumberReverser{
    public:
    int reverseNumber(int num){
        int reversedNum=0;
        while(num !=0){
            int digit = num%10;
            reversedNum= reversedNum*10+digit;
            num/=10;
        }
        return reversedNum;
    }
};
    int main(){
        NumberReverser nr;
        int number;
        std::cout<<"Enter an integer to reverse: ";
        std::cin>>number;
        int reversed= nr.reverseNumber(number);
        std::cout<<"Reversed Number: "<<reversed<<std::endl;
        return 0;
    }