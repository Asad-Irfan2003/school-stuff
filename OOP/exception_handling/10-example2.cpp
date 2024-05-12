#include <iostream>
using namespace std;
#define N 100


void initialize_array(int* arr,int size){
    for(int i=0;i<size;i++){
        arr[i]=(rand()%100)+1;
    }
}


int main(){
    int i;
    int arr[N];
    initialize_array(arr,N);
    try{
        cin>>i;
        if(i<0 || i>=N){
            throw "Array out of bounds";
        }
        cout<<arr[i];

    }
    catch(const char* message){
        cout<<message<<endl;
    }
}