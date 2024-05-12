#include <iostream>
using namespace std;



//There is a special type of catch block called "catch_all" written as catch(...) that can be used to catch
//all types of exception
//Priorty is always to explicit data type catch block

int main(){

    try{
        char str[12]="Hello World";
        throw str;
    }
    catch(char* excep){
        cout<<"Caught"<<endl;
    }
    catch(...){
        cout<<"Default Exception"<<endl;
    }
}