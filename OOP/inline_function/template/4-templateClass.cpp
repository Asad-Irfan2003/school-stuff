#include<iostream>
using namespace std;
template<class T>
class mypair{
    T a,b;
    public:
    mypair(T first,T second):a(first),b(second){}
    T getmax(T a,T b){
        if(a>b){
            return a;
        }
        else{
            return b;
        }
    }
    
};
int main(){
    mypair<int> p(2,3);
    cout<<p.getmax(2,3);

}