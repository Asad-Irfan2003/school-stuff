#include <fstream>
#include <iostream>
using namespace std;
#define BUFFER_SIZE 100

int main(){
    //Reading file character by character
    char buf;
    char buffer[BUFFER_SIZE];
    ifstream file1("sample8.txt",ios::in);
    
    while(file1.get(buf)){ //This will be false when we reach end of file
        cout<<buf;
    }
    cout<<endl;
    cout<<endl;
    file1.close();
    //Reading file line by line
    ifstream file2("sample8.txt",ios::in);
    while(file2.getline(buffer,BUFFER_SIZE)){
        cout<<buffer;
    
    }
    cout<<endl;
}