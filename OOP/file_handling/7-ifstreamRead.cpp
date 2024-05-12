#include <fstream>
#include <iostream>
using namespace std;
#define BUFFER_SIZE 20

//Do not use string when entering data into file or retriving data as it causes issues
//Instead use char array

int main(){
    ifstream file1("sample7.txt",ios::in);
    char buffer[BUFFER_SIZE];
    try{
        if(!file1){
            throw "Unable to open file";
        }
    }
    catch(const char* err){
        cout<<err<<endl;
        }
    //Reading from file using >> operator
    file1>>buffer;
    cout<<buffer<<endl;
    file1.close();
    //Using getline() or get() method
    //get(char& buffer) -> Retrieves a single character
    //getline(char* buffer) -> Retrieves a line
    ifstream file2("sample7.txt",ios::in);
    try{
        if(!file2){
            throw "Unable to open file";
        }
    }
    catch(const char* err){
        cout<<err;
        return 1;
    }
    file2.getline(buffer,BUFFER_SIZE);
    cout<<buffer<<endl;

}