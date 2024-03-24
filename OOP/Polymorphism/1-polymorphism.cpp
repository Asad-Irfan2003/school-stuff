/*
Polymorphism
Poly - many
morphism - forms

Function behaving differently in terms on the context
Compile Time Polymorphism
-Function Overloading
-Operator Overloading

Runtime Polymorphism
-Function Overriding

*/
//Function Overloading
#include <iostream>
using namespace std;
class A{

    public:
    void add(int a,int b)
    {
        cout<<a+b<<endl;

    }
    void add(int a,int b,int c)
    {
        cout<<a+b+c<<endl;

    }

};

int main()
{
    A a;
    a.add(10,20); //Calling first method
    a.add(10,20,30); //Calling second method
}
