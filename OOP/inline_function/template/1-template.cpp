#include <iosteam>
using namespace std;


void print_array(int * arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
}
void print_array(string * arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
}
void print_array(float * arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
}
//Writing same code for different types causes redundancy so we use tempelate
//Template-> data type is sent as an argument so we do not have to write same code for different type
