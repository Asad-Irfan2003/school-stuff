#include <iostream>
using namespace std;
//Multiple inheritance
//One class is derived from one for more class
//Syntax
//Class C inheriting from class A and class B
class A{
    
};
class B{

};
class C:public A,public B{

};
//class A-> class C <- class B
class  account{
    float salary;
    public:
    void display(){
     cout<<salary<<endl;
    }
    account():salary(1000){

    }
    account(float s):salary(s){

    }
};
class language{
    string language1;
    public:
    void display(){
        cout<<language1<<endl;
    }
    language():language1(""){

    };
    language(string l):language1(l){

    }
};
class programmer:public account,public language{
     float bonus;
     public:
     void display(){
        language::display();
        account::display();
         cout<<bonus<<endl;
     }
     programmer():bonus(0){}
   programmer(float s,string l,float b):bonus(b),language(l),account(s){

   }
};
int main(){
    programmer p(100.0,"c",10);
    p.display();

}