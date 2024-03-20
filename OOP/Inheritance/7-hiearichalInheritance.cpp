#include <iostream>
using namespace std;

/*
Hiearichal Inheritance
When many derived classes are created from a single base class

Syntax:
Class B, Class C, Class D inherit from Class A


*/
class A{

};
class B:public A{

};
class C:public A{

};
class D:public A{

};

/*
B<-A->C
    |
    D

*/

class account{
 protected:
 float salary;
 account():salary(0){}
 account(float s):salary(s){}
 public:
void display(){
    cout<<"salary: "<<salary<<endl;
}
};
class programmer:public account{
    private:
    float bonus;
    public:
    programmer():bonus(0),account(){}
    programmer(float bonus,float salary):bonus(bonus),account(salary){}
    void display(){
        account::display();
        cout<<"Bonus: "<<bonus<<endl;
    }
};
class HR:public account{
    private:
    float bonus;
    public:
    HR():bonus(0),account(){}
    HR(float bonus,float salary):bonus(bonus),account(salary){}
    void display(){
        account::display();
        cout<<"Bonus of HR: "<<bonus<<endl;
    }
};
int main(){
    programmer p(9000.0,100000.0);
    HR hr(20000.0,17687080.09);

}
