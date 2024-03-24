#include <iostream>
using namespace std;

/*
->Occus between base class and derived class
->Run time polymorphism
-> When we create a method of same name in derived class which already exists in base class
*/

class A{
    public:
    void print(){
        cout<<"A::print() called"<<endl;
    }
};
class B:public A{
    public:
    void print(){
        cout<<"B::print() called"<<endl;
    }

};
class animal{
    public:
    void eat(){
        cout<<"Eating..."<<endl;
    }
};
class dog:public animal{
    public:
    void eat(){
        cout<<"Eating bread..."<<endl;
    }
};
int main(){
    A a;
    B b;
    a.print();
    b.print();
    animal g;
    dog d;
    g.eat();
    d.eat();
}