#include <iostream>
using namespace std;

//Abstract class-> Not providing any implementation of base class functions due to unknown implementation
//Purpose: Other classes inherit from it
//It cannot be used by itself
class Shape{
    public:
    virtual float area()=0; //Pure virtual function
    //Pure virtual function: Functions which can only be used in derived class after its implementation
};
//Identification of abstract class: It has atleast one pure virtual functions

//Derived class from abstract c;ass
class Rectangle:public Shape{
    float l;
    float b;
    public:
    Rectangle(float l,float b):l(l),b(b){}
    float area(){
        return l*b;
    }
};
class Square:Shape{
    float l;
    public:
    Square(float l):l(l){}
    float area(){
        return l*l;
    }
};

int main(){
    //Shape s; Error because abstract class objects cannot be created
    Rectangle r(5.0,10.0);
    cout<<r.area()<<endl;

}

//Interface: A class in which there is no implementation of its methods
//C++ interface: A class in which all functions are pure virtual functions
