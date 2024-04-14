#include<iostream>
#include<string>
using namespace std;

class Mother{
protected:
    string name;
    int age;
public:
    Mother(string="",int=0);
    void Display();
};
Mother::Mother(string n,int a){
    name=n;
    age=a;
}
void Mother::Display(){
    cout<<"Mother's Details:"<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
}

class Daughter:public Mother{
protected:
    string name2;
    int age2;
public:
    Daughter(string="",int=0,string="",int=0);
    void Display();
};
Daughter::Daughter(string n,int a,string n1,int a1):Mother(n,a){
    name2=n1;
    age2=a1;
}
void Daughter::Display(){
    Mother m1(name,age);
    m1.Display();
    cout<<"Daughter's Details:"<<endl;
    cout<<"Name:"<<name2<<endl;
    cout<<"Age:"<<age2<<endl;
}
int main(){
    Daughter d1("Marry",45,"Pandora",23);
    d1.Display();
}

