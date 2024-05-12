#include <fstream>
#include <iostream>
using namespace std;

int main() {
    // Method 1: Using constructor
    ifstream file1("sample6.txt", ios::in);
    try {
        if (!file1) {
            throw "Unable to open file";
        }
        // File is opened successfully, do operations here if needed
    } catch (const char* err) {
        cout << err;
        return 1; // Return error code
    }
    file1.close(); // File will be closed automatically when it goes out of scope

    // Method 2: Using open() method
    ifstream file2;
    file2.open("sample6.txt");
    try {
        if (!file2) {
            throw "Unable to open file";
        }
    } catch (const char* err) {
        cout << err;
        return 1; // Return error code
    }
    file2.close(); // File will be closed automatically when it goes out of scope

    return 0; // Program ran successfully
}
