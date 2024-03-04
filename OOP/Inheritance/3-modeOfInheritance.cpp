//Modes of Inheritance
/*
comes before inherited class name
class <derived_classname>: <mode> <base_classname>
//3 modes
1. Public:
Public methods and attributes are public in inherited class
Private methods and attributes are private in inherited class
Protected methods and attributes are protected in inherited class


2. Protected: class members outside class are inaccessable but are accessable in inherited class
Public class members are protected in inherited class
Private class members are protected in inherited class
Protected class members are protected i inherited class

3. Private: All class members are hidden from inherited class no matter their access modifier
*/

#include<iostream>
using namespace std;
class parent{
protected:
int age;

};
class child: public parent{
    public:
  void setage(int a){
    age=a;
  }
};
int main(){
    parent p;
    child c;
    //p.age=20; not accesssible outside class because protectd
    //c.age=20; not accessible outside class because protected
    c.setage(20);
}
