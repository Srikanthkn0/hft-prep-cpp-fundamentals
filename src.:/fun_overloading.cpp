#include <iostream>

class func{
    public:
    void sum(double a, double b){
        std::cout<<"sum of two doubles:"<<a+b<<std::endl;
    }
    void sum(int a,int b){
        std::cout<<"sum of two integers:"<<a+b<<std::endl;
    
    }

    void sum(int a, int b, int c){
        std::cout<<"sum of three integers:"<<a+b+c<<std::endl;
    }
};

int main(){
    func f;
    f.sum(5.3,4.5);
    f.sum(5,4);
    f.sum(1,2,3);
    return 0;
}
