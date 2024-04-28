#include<iostream>
using namespace std;
template<typename T>
int search(T * arr,int size,T searchvalue){
    for(int i=0;i<size;i++){
        if(arr[i]==searchvalue){
            return i;
        }
    }
      return -1;
}
int main(){
    int arr[5]={1,2,3,4,5};
    float arr1[5]={1.0,2.0,3.0,4.0,5.0};
    string arr2[5]={"zoha","hasan","asad","daniyal","ahsan"};
    cout<<search<int>(arr,5,6)<<endl;
    cout<<search<float>(arr1,5,8.0)<<endl;
    cout<<search<string>(arr2,5,"zoha")<<endl;
}