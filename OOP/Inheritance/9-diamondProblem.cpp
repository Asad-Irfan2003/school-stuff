#include <iostream>
using namespace std;

/*
Diamond Problem
-> When one derived class is created from two or more derived class and those
derived class have a common base class
->Issue: The grandchild class has two copies of grandparent class

Example:
Class D inherits from Class B and Class C
Class B inherits from Class A
Class C inherits from Class A

Class D has two copies of Class A, one from Class C and one from Class B
*/
class A{
    public:
    A()
    {
        cout<<"A::A() called"<<endl;
    }

};
class B:public A{
    public:
    B():A(){
        cout<<"B::B() called"<<endl;
    }
};
class C:public A{
    public:
    C():A(){
        cout<<"C::C() called"<<endl;
    }
};
class D:public B,public C{
    public:
    D():B(),C(){
        cout<<"D::D() called"<<endl;
    }
};


int main()
{
    D d1;
}
//Two times A constructor is called so there are two copies of A in D which
//causes ambiguity as when we call any attiutes of A inherited in D
//The compiler does not know which instance to call(From B or From C)





