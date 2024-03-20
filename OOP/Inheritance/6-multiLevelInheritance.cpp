#include <iostream>
using namespace std;


/*
Multi Level Inheritance
Derived class is derived from another derived class

Syntax:
Class C derived from Class B which is derived from Class A
*/

class A{

};
class B:public A{

};
class C: public B{

};
/*
A
|
B
|
C
All methods and attributes of A and B are in C
*/

class person{
    protected:
    string name;
    int age;
  public:
 person():name(""),age(0){}
 person(string n,int a):name(n),age(a){}
  void display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
  }
};
class employee:public person{
   protected:
   string company;
   float salary;
   public:
   employee():company(""),salary(0.0),person(){}
   employee(string name,int age,string company,float salary):person(name,age),company(company),salary(salary){}
   void display(){
    person::display();
    cout<<"Company: "<<company<<endl;
    cout<<"Salary: "<<salary<<endl;
   }
};
class programmer:public employee{
    private:
    int number;
    public:
    programmer():number(0),employee(){}
    programmer(string name,int age,string company,float salary,int number):employee(name,age,company,salary),number(number){}
    void display(){
        employee::display();
        cout<<"Number: "<<number<<endl;
    }
};
int main(){
programmer p("zoha",20,"ibex",10000.0,10);
p.display();
}



