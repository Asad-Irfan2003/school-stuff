#include <iostream>
using namespace std;


class employee{
    int id;
    public:
    employee(){
        id=1;
    }
    employee(int id):id(id){}

};
void func1(employee *arr){
    arr=new employee[10];
}
void func2(employee *arr){
    arr=new employee[10]; //Allocating size
    for(int i=0;i<10;i++){
        arr[i]=employee(i); //Initialize
    }
}
int main(){
    employee *arr1,*arr2;
    func1(arr1);
    func2(arr2);
}