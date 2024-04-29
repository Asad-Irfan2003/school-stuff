#include <iostream>
using namespace std;

//Rule 1: Abstract class has at least one pure virtual function
class Test{
    int x;
    public:
    virtual void show()=0; //It has one pure virtual function so it is abstract class
    int get_x(){ //Implementation of get_x() in abstract class so not an interface
        return x;
    }
};

//Rule 2: We can have pointers and references of abstract class type
class Base{ //Abstract class
    public:
    virtual void show()=0;
};
class Derived:public Base{
    public:
    void show(){
        cout<<"Derived class"<<endl;
    }
};


//Rule 3: If we do not provide the implementation for the virtual pure function in derived class, then the
//derived class is also an abstract class
class Base2{ //Abstract class
public:
    virtual void show()=0;
};
class Derived2: public Base2{ //Also an abstract class according to rule 3 since we did not provide an implementation for show()
};

//Rule 4: Abstract class can have constructors
class Base3{
    protected:
    int x; //Abstract class can have attributes
    public:
    virtual void fun()=0; //Pure virtual function
    //Constructor
    Base3(int x):x(x){}

};
class Derived3:public Base3{
    int y;
    public:
    Derived3(int x,int y):Base3(x),y(y){}
    void fun(){
        cout<<"x: "<<x<<endl;
        cout<<"y: "<<y<<endl;
    }
};

//Rule 5: Abstract class can also be created using struct keyword
struct Base4{ //Valid Abstract class
    virtual void show()=0;
};

int main(){
    //Test t; Due to rule 1, it is an abstract class so its object cannot be created

    Base *bp=new Derived; //No error because according to rule 2, pointer of abstract class can be created
    Derived d;
    Base &br=d; //No error because accoring to rule 2, reference of abstract class can be created

    //Base2 b2; //Error due to rule 1, it is an abstract class
    //Derived2 d2; //Error since this is also an abstract class


    Derived3 d3(4,5);
    d3.fun();
    Base3 *b3p=new Derived3(10,11);
    b3p->fun();


}