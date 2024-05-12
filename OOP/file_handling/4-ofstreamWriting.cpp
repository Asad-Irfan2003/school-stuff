#include <fstream>
#include <iostream>
using namespace std;

int main(){
    //Using >> Operator
    ofstream file("sample2.txt");
    try{
    if(!file){ //Unable to open file
    throw "Unable to open file";
    }
    }
    catch(char* err){
        cout<<err<<endl;
        return 1;
    }
    file<<"Hello World"<<endl;
    file.close();

}