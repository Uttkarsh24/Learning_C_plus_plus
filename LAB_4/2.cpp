/*Define a class to represent a bank account, including the following data members:
 Name of the depositor
 Account number
 Type of account
 Balance amount in the account
And member functions:
 To assign initial values
 To deposit an amount
 To withdraw an amount after checking the balance
 To display the name and balance
Write a main program to test the program.*/

#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class Account{
    char name[30];
    char type[10];
    double balance;

public:
    void Deposit(double);
    void withdraw(double);
    void Display();
    void userinput();
};
void Account::Deposit(double b)
{
    balance+=b;
    cout<<"Current Balance:"<<balance<<endl;
}
void Account::withdraw(double b)
{
    if(balance>=b)
    {
    balance-=b;
    cout<<"Current Balance:"<<balance<<endl;
    }
    else
    {
        cout<<"Insufficient Balance"<<endl;
    }
}
void Account::Display()
{
    cout<<"Account Holder:"<<name<<endl;
    cout<<"Account Type:"<<type<<endl;
    cout<<"Account Balance:"<<balance<<endl;
}
void Account::userinput()
{
    cout<<"Welcome to ACCOUNT creating Window"<<endl;
    cout<<"Enter your Name:"<<endl;
    fgets(name,30,stdin);
    cout<<"Enter account type: `savings` or `current`"<<endl;
    fgets(type,20,stdin);
    balance=0.0d;
    cout<<"Congratulations!! Account Created : "<<endl;
    Display();
}
int main()
{
    Account ac;
    ac.userinput();
    int x;
    cout<<"Enter 1 to deposit \n 2 to withdraw \n 3 to show balance."<<endl;
    cin>>x;
    switch(x)
    {
    case 1:
        {
            double amt;
            cout<<"Enter amount:"<<endl;
            cin>>amt;
            ac.Deposit(amt);
            break;
        }
    case 2:
        {
            double amt;
            cout<<"Enter amount:"<<endl;
            cin>>amt;
            ac.withdraw(amt);
            break;
        }
    case 3:
        {
            ac.Display();
            break;
        }
    default:
        {
            cout<<"Wrong choice"<<endl;
            break;
        }
    }
}
