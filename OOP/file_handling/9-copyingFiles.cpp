#include <iostream>
#include <fstream>
using namespace std;
//Basic Idea:
/*Open one file for read and another file for write
read a char from one file and write it to another until we reach end of file
*/
int main(){
    char buff;
    ifstream file1("infile.txt",ios::in);
    ofstream file2("outfile.txt",ios::out);
    while(file1.get(buff))
    {
        file2<<buff;
    }
    file2<<"\n";
    file1.close();
    file2.close();
}