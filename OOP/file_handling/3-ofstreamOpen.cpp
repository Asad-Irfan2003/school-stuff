#include <iostream>
#include <fstream>
using namespace std;

int main(){
//Opening file
//Method 1: Using constructor
ofstream file1("sample1.txt"); //open_mode is by default out  if not specified
file1.close();

//Method 2: Using open() method
ofstream file2;
file2.open("sample1.txt",ios::out); //File Open for writing

file2.close();


}