#include<iostream>
using namespace std;
class bank{
 public:
   float amount;
   void set_amount(float a){
    amount=a;
   }
 int getbalance(){
       return 0;
 }
};
class bankA:public bank{
public:
int getbalance(){
    return amount;
}
};
class bankB:public bank{
public:
  int getbalance(){
     return amount;
  }
};
class bankC:public bank{
    public:
    int getbalance(){
     return amount;
    }
};
int main(){
    bank b;
    bankA bA;
    bankB bB;
    bankC bC;
    b.set_amount(10.0);
    cout<<b.getbalance()<<endl;
    bA.set_amount(1000.0);
    cout<<bA.getbalance()<<endl;
    bB.set_amount(1500);
    cout<<bB.getbalance()<<endl;
    bC.set_amount(2000);
    cout<<bC.getbalance()<<endl;
}