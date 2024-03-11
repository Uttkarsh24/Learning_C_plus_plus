#include<iostream>
#include<string>
using namespace std;
class BankAccount{
    int accountNumber;
    string accountHolderName;
    double balance;
public:
    BankAccount();
    BankAccount(int,string);
    BankAccount(int,string,double);
    void deposit(double);
    void withdraw(double);
    void display();
};
BankAccount::BankAccount()
{
    accountNumber=0;
    accountHolderName="";
    balance=0.0;
}
BankAccount::BankAccount(int x,string n)
{
    balance=0.0;
    accountNumber=x;
    accountHolderName=n;
}
BankAccount::BankAccount(int x,string n,double y)
{
    balance=y;
    accountNumber=x;
    accountHolderName=n;
}
void BankAccount::deposit(double amt)
{
    balance+=amt;
    cout<<"Balance:"<<balance<<endl;;
}
void BankAccount::withdraw(double amt)
{
    if(balance-amt<=0){
        cout<<"Transaction Failed"<<endl;
    }else{
        balance-=amt;
        cout<<"Transaction Done."<<endl;
    }
    cout<<"Balance:"<<balance<<endl;
}
void BankAccount::display()
{
    cout<<"Account Holder:"<<accountHolderName<<endl;
    cout<<"Account Number:"<<accountNumber<<endl;
    cout<<"Balance:"<<balance<<endl;;
}
int main()
{
    BankAccount ob(420,"Uttkarsh",10000.0);
    ob.display();
    ob.deposit(5000);
    ob.withdraw(2000.0);
    ob.display();
}
