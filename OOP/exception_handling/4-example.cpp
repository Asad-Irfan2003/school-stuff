#include <iostream>
using namespace std;



int main(){
int a;
cin>>a;
try{
    if(a<0){
        throw a;
    }
    cout<<a;
}
catch(int a){
    cout<<"Number is negative"<<endl;
}

}