//Single Inheritance


#include <iostream>
using namespace std;
//Single Inheritance
//One class will inherit from only one class
//Syntax: Class B inheriting from class A
class A{

};
class B:public A{

};
// Class A -> Class B
class person{
    protected:
    string name;
    string gender;
    int age;
    public:
    void display(){ 
        //INPUT: no input
        //OUTPUT: no output
        //PROCEDURE: Prints all attribites in a class
        cout<<"Name:"<<name<<endl;
        cout<<"Gender:"<<gender<<endl;
        cout<<"Age:"<<age<<endl;
    }
    void getdata(string n,string g,int a){
        //INPUT=name,gender and age
        //OUTPUT=no
        //PROCEDURE=assigning values to attributes
        name=n;
        gender=g;
        age=a;
    }
};
class employee: public person{
    private:
    string company;
    float salary;
    public:
    void getdata(string n,string g,int a,string c,float s){
    //INPUT:name,gender,age,company,salary
    //OUTPUT: NONE
    //PROCEDURE:assigning values to attributes
    person::getdata(n,g,a);
    company=c;
    salary=s;
    }

};
int main(){
    person p;
    employee e;
    p.getdata("Zoha","Female",20);
    e.getdata("Arisha","Female",20,"Microsoft",100000.0);
    p.display();
    e.display();

}