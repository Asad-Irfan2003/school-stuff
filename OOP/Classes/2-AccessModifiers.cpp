#include <iostream>
using namespace std;

//Access Modifiers->public, private, protected
//Private: Accessable by class, inaccessable by instance, inaccessable by inherited class
//Public: Accessable by class, instance and inhertited class
//Protected: Acessable by class, inaccessable by instance, accessable by inherited class
class BankAccount{
    //Private by default
    private:
    int account_number;
    string account_holder_name;
    float balance;
    public:
    //Check balance, withdraw and deposit methods
    void check_balance()
    {
        cout<<"Your balance is: "<<balance<<endl;
    }
    void withdraw(float amount)
    {
        if(balance>amount && amount>0)
        balance-=amount; //balance= balance - amount
    }
    void deposit(float amount)
    {
        if(amount>0)
        balance+=amount; //balance=balance+amount;
    }


};


int main()
{
    BankAccount a1;
    //float b=a1.balance;

}