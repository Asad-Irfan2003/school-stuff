#include <iostream>
using namespace std;

//Variable that is declared for the lifetime of program
//Value of previous call is carried over next function call
//Syntax of static variable: static <data_type> <var_name>=<value>;
void static_demo_1()
{
    int val=0; //Local variable
    val++;
    cout<<val<<endl;

}
void static_demo_2()
{
    static int val; //Static variable
    val++;
    cout<<val<<endl;
}


int main()
{
    static_demo_1(); //1
    static_demo_1(); //1
    static_demo_1(); //1

    static_demo_2(); //1
    static_demo_2(); //2
    static_demo_2(); //3

}
