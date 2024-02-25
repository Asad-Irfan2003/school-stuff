#include <iostream>
using namespace std;
//1. Static variables are attributes shared by object
//2. There cannot be multiple copies of the same static variable for different objeccts
//3. Static variables cannot be initialized using constructors
//4. Static variable are initialized outside class using :: operator
//5. Id not initialized, it will give an error

class X{
    public:
    static int i;
    public:
    X(){}
};
int X::i=0; //Initialzing static attribute



int main()
{
    X x1;
    X x2; 
    //x1 and x2 have the same instance of i
    cout<<x1.i<<endl;
    cout<<x2.i<<endl;
    cout<<X::i<<endl;
}