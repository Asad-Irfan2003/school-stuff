#include <iostream>
using namespace std;



/*Property 3:
If an exception is thrown and not caught anywhere then the program executes abnormally
*/


int main(){
    try{
        throw 'a';
    }
    catch(int x){
        cout<<"Integer Exception"<<endl;
    }

}