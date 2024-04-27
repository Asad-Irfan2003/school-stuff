#include <iostream>
using namespace std;


//Template function for printing an array
template<typename T>
void print_array(T* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
template<typename T>
T mmax(T a,T b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
template<typename T>
void swapp(T &i,T&j){
  T temp;
  temp=i;
  i=j;
  j=temp;
}
template<typename T>
T bubblesort(T *arr,int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
         if(arr[j]>arr[j+1]){
            swapp(arr[j],arr[j+1]);
         }
        }
    }
}


int main(){
    int arr[5]={4,3,2,1,5};
    float arr1[5]={3.0,2.0,1.0,5.0,4.0};
    char arr2[5]={'b','c','d','a','e'};
    bubblesort<int>(arr,5);
    bubblesort<float>(arr1,5);
    bubblesort<char>(arr2,5);
    print_array<int>(arr,5);
    print_array<float>(arr1,5);
    print_array<char>(arr2,5);

}