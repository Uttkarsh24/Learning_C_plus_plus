/*Create two classes DM and DB which store the value of the distances. DM stores distances in
meters and centimeters and DB in feet and inches. Write a program that can read values for the
class objects and add one object of DM with another object of DB. Use a friend function to carry
out the addition operation. The object that stores the results may be a DM object or DB object,
depending on the units in which the results are required. The display should be in the format of
feet and inches or meters and centimeters depending on the object on display*/

#include<iostream>
using namespace std;

class DM{
public :
    float distancem;
    friend void add();
    void get();
};

class DB{
public :
    float distancef;
    friend void add();
    void get();
};

void DM::get()
{
    cout<<"Enter Distance in Meters and Centimeters:"<<endl;
    cin>>distancem;
}

void DB::get()
{
    cout<<"Enter Distance in Foot and Inches"<<endl;
    cin>>distancef;
}

void add(DM& n1,DB& n2)
{
    float result;
    char ch;
    cout<<"do you want the result in Meters or Foot?(M/F)"<<endl;
    cin>>ch;
    if(ch=='M')
    {
        result=n1.distancem+(n2.distancef/3.4);
        cout<<result<<endl;
    }
    else if(ch=='F')
    {
        result=n2.distancef+(n1.distancem/3.4);
        cout<<result<<endl;
    }
    else
    {
        cout<<"Wrong choice"<<endl;
    }
}
int main()
{
    DM a;
    DB b;
    a.get();
    b.get();
    add(a,b);
    return 0;
}
