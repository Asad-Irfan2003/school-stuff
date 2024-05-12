#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Person{
    char name[100];
    int age;
    public:
    Person():name(""),age(0){}
    Person(char name[100], int age):age(age){
        strcpy(this->name,name);

    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

//To store objects into a file, we use binay files by using write() method
//Syntax : fileObj.write((char*)&obj,sizeof(obj))



int main(){
    char arr[10]="Zoha";
    Person p1(arr,21);
    Person p2; //This object will be initalized by a file
    //Opening file for reading
    ofstream file1("person.bin",ios::binary | ios::out);
    ifstream file2("person.bin",ios::binary | ios::in);
    file1.write((char*)&p1,sizeof(p1));
    file1.close();
    file2.read((char*)&p2,sizeof(p2));
    p2.display();

}