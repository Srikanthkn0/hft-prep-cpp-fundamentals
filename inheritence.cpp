#include <iostream>

class base{

};

class derived : public base{

};

int main(){
    base *bp= new derived();
    derived *dp=new derived();

}