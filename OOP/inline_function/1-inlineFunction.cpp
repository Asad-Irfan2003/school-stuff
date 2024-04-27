#include <iostream>
using namespace std;

/*inline <return_type> <function_name>(arguments){code}*/

inline void displaynumbers(int num){
    cout<<num<<endl;
}
int main(){
    displaynumbers(5);
    displaynumbers(8);
    displaynumbers(666);
}
