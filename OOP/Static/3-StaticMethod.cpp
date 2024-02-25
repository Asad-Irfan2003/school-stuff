#include <iostream>
using namespace std;

//Static Methods are shared by all instances of class
// calling syntax <class_name:>::<method_name>
//***Static functions are only allowed to access static attributes and static methods within class***

//To access non-static methods or attributes, pass objects as arguments or create an object inside the method
class A{
    public:
    A(){}
    static void f1(A obj1)
    {
        cout<<"A::f1() called"<<endl;
        A obj2;
        //f2(); //Error: f2() is not static
        obj1.f2(); //No Error
        obj2.f2(); //No error
    }
    void f2(){}

};

int main(){
    A obj1;
    A::f1(obj1);

}