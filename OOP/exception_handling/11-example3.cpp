#include <iostream>
using namespace std;

#define N 10

void initialize_array(int* arr,int size){
    for(int i=0;i<size;i++){
        arr[i]=(rand()%5);
    }
}

int main(){
int i;
int arr[N];
int a;
initialize_array(arr,N);
try{
    cin>>i;
    if(i<0 || i>=N ){
        throw "Array out of bound";
    }
    cin>>a;
    if(a<0 || a>=N){
        throw "Array out of bound";
    }
    if(arr[a]==0){
        throw "Division by zero";
    }
    cout<<(float)arr[i]/arr[a]<<endl;
}
catch(const char*c ){
    cout<<c<<endl;
}

}