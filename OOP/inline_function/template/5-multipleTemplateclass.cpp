#include<iostream>
using namespace std;
template<class t1,class t2>
class sample{
  t1 a;
  t2 b;
  public:
  sample(t1 first,t2 second):a(first),b(second){}
  void display(){
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
  }

};
int main(){
    sample<int,float> s(3,6.9);
    s.display();
}