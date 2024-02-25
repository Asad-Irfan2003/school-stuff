
/***Scenario: Bank Account Management**

You are tasked with designing a class for a bank account. The account should keep track of the total number of accounts created and
the interest rate
1. Implement a static variable to count the total number of bank accounts created.
2. Include a static attribute for the interest rate, applicable to all accounts.
3. Create a method to display interest rate and total number of bank accounts
4. Create a method to change interest rate

Now, pose questions based on this scenario:

a. How would you ensure that each new account increments the total number of accounts?
b. How could you allow the bank to change the interest rate for all accounts?
*/
#include <iostream>
using namespace std;

class account{
    static int count;
    static int interestrate;
    public:
    account(){
        count++;
    }
    ~account(){
        count--;
    }
    static void displaycount(){
        cout<<count<<endl;
    }
    static void display(){
        cout<<interestrate<<endl;
        cout<<count<<endl;
    }
    static void change_interest(int newinterest){
        interestrate=newinterest;
    }
};
int account::count=0;
int account::interestrate=1000;


int main(){
    account a1;
    account a2;
    account a3;
    account a4;
    account a5;
    cout<<"Displaying number of accounts"<<endl;
    account::displaycount(); 
    account::display();
    account::change_interest(400);
}