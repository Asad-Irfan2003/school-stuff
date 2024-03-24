#include <iostream>
using namespace std;

/*Function Overloading
->Compile Time Polymorphism
-> Multiple functions of same name
Conditions:
1. Parameters should have a different type
2. Number of parameters should be different
3. Order of parameters should be different
*/
//Can also be done in class called method overloading
void add(int a,int b)
{
    cout<<a+b<<endl;
}
void add(int a,int b,int c){
    cout<<a+b+c<<endl;
}
void add(float a,int b)
{
    cout<<a+b<<endl;
}
void add(int a,float b){
    cout<<a+b<<endl;
}
void add(string a,string b)
{
    cout<<a+b<<endl;
}
int main(){
    add(10,20); //1st function call
    add(10,20,30); //2nd function call
    float x=10.0;
    add(x,20); //3rd function call
    add(10,x);//4th function call
    add("Zoha","Ahmed"); //5th function call
}