#include <iostream>
using namespace std;


/*
Property 2:
Implicit type conversion does not happen for primitive types
*/
void funA(int a){
    cout<<a<<endl;
}


int main(){
    char a='a';
    funA(a);
    try{
        throw 'a';
    }
    catch(int x){
        cout<<"Integer caught"<<endl;
    }
    catch(...){
        cout<<"Default Exception"<<endl;
    }

}