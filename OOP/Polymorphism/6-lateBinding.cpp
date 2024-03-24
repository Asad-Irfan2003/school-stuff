#include <iostream>
using namespace std;

//write virtual keyword before overridden function for
//Dynamic Binding

class Base{
    public:
    virtual void A() 
    {
        cout<<"Base::A() called"<<endl;
    }

};
class Derived:public Base{
    public:
    void A(){//Overriding
    cout<<"Derived::A() called"<<endl;
    }
};

int main()
{
    Base *b1=new Base;
    Base *b2=new Derived;
    b1->A();
    b2->A();
}