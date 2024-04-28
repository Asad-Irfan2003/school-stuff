#include<iostream>
using namespace std;
template<typename T,typename U>
void print(T a,T b){
    cout<<a<<endl;
    cout<<b<<endl;
}
template<typename T,typename U>




int main(){
    print<int,float>(10,3.0);
}