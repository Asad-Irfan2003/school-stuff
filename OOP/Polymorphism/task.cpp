#include <iostream>
using namespace std;
class message{
    string s;
    public:
  message():s(""){}
  message(string str):s(str){}
  void print(){
    cout<<"The message is.."<<s<<endl;
  }
  void print(string str){
    cout<<"The message is.."<<s+str<<endl;
  }

};
int main(){
    message m("my name is");
    m.print();
    m.print("Zoha");
}