#include <iostream>
using namespace std;

template<typename T>
void increment(T& a){
    a++;
}
template <>
void increment<char>(char& a){
    a-=32;
}
template<>
void increment<string>(string &arr){
  for(int i=0;i<arr.length();i++){
    if(arr[i]>=97 && arr[i]<=122)
    arr[i]-=32;
  }
}


int main(){
    int a1=2;
    float a2=3.0;
    char a3='a';
    string a4="Zoha";
    increment(a1);
    increment(a2);
    increment(a3);
    increment(a4);
    cout<<a1<<" "<<a2<<" "<<a3<<endl;
    cout<<a4<<endl;
}