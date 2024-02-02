#include <iostream>
using namespace std;
class Person{
    private: //Class is private by default ->Attributes and Methods can only be accessed by class itself and no one else
    //Attribute->Variable in class
    //         -> Attributes should always be kept private


    public: //All attributes and methods below this are public -> Used by anyone
    string name; //Attributs
    int age;
    //Method->Functions within class
    void display_info(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main()
{
   Person p1; //Instance  of a class->Object
   p1.name="Asad";
   p1.age=20;
   p1.display_info();

}
