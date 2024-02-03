#include <iostream>
using namespace std;

//Setters/Mutators-> methods used to set value of an attribute
//Getters/Accessors-> Methods used to read a value of an attribute
class BankAccount{
    private:
    int account_number;
    string account_holder_name;
    float balance;
    public:

    //Setters
    void set_accountNumber(int num)
    {
        account_number=num;

    }
    void set_accountHolderName(string name)
    {
        account_holder_name=name;
    }
    void set_balance(float amount){
        balance=amount;
    }

    //Getters
    int get_accountNumber()
    {
        return account_number;
    }
    string get_accountHolderName()
    {
        return account_holder_name;
    }
    float get_balance()
    {
        return balance;
    }



    void check_balance()
    {
        cout<<"Your balance is: "<<balance<<endl;
    }
    void withdraw(float amount)
    {
        if(balance>amount && amount>0)
        balance-=amount;
    }
    void deposit(float amount)
    {
        if(amount>0)
        balance+=amount;
    }


};



int main()
{
    BankAccount b1;
    b1.set_accountNumber(100);
    b1.set_accountHolderName("Asad Irfan");
    b1.set_balance(10000);
    
    cout<<b1.get_accountHolderName()<<" "<<b1.get_accountNumber()<<" "<<b1.get_balance()<<endl;
}