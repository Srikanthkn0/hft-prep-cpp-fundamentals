#include <iostream>

class Base {
    public:
    int data1, data2;

    Base(int a=0, int b=0):data1(a), data2(b){}
};

class derived :public Base{
    public:
    void show(){
        std::cout<<"data1: "<<data1<<"data2: "<<data2;

    }
};

int main(){
    derived d;
    d.show();
    return 0;
}