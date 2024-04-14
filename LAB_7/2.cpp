#include<iostream>
#include<string>
using namespace std;

class Student{       ///STUDENT CLASS
protected:
    string name;
    string degree;
public:
    Student(string="",string="");
    void display();
};

Student::Student(string x,string y):name(x),degree(y){
    cout<<"Student Constructor"<<endl;
}

void Student::display(){
cout<<"University:"<<name<<endl;
cout<<"Degree:"<<degree<<endl;
}

class Employee{  ///EMPLOYEE CLASS
protected:
    string Ename;
    int E_no;
public:
    Employee(string="",int=0);
    void display();
};

Employee::Employee(string x,int y):Ename(x),E_no(y){
    cout<<"Employee contructor called"<<endl;
}

void Employee::display(){
    cout<<"Name:"<<Ename<<endl;
    cout<<"Employee number:"<<E_no<<endl;
}

class Manager:public Employee,public Student{  ///MANAGER CLASS
protected:
    string title;
    int dues;
public:
    Manager(string="",string="",string="",int=0,string="",int=0);
    void display();
};

Manager::Manager(string n,string deg,string e,int x,string t,int d):Student(n,deg),Employee(e,x){
title=t;
dues=d;
}

void Manager::display(){
    Employee::display();
    Student::display();
    cout<<"Title:"<<title<<endl;
    cout<<"Dues:"<<dues<<endl;
}

class Scientist:public Employee,public Student{  ///SCIENTIST CLASS
protected:
    int publications;
public:
    Scientist(string="",string="",string="",int=0,int=0);
    void display();
};

Scientist::Scientist(string n,string deg,string e,int x,int p):Student(n,deg),Employee(e,x){
    publications=p;
    cout<<"Scientist constructor"<<endl;
}

void Scientist::display(){
    Employee::display();
    Student::display();
    cout<<"Publications:"<<publications<<endl;
}

class Labour:public Employee{   ///LABOUR CLASS
public:
    Labour(string="",int=0);
    void display();
};

Labour::Labour(string x,int y):Employee(x,y){
    cout<<"emplloyee contructor"<<endl;
}

void Labour::display(){
    Employee::display();
}

int main(){
Manager e1("Jaypee","B.TECH","Uttkarsh",420,"Branch Manager",1000);
e1.display();
cout<<"-----------------------------------------------------"<<endl;
Scientist s1("Jaypee","B.TECH","Uttkarsh",420,23);
s1.display();
cout<<"-----------------------------------------------------"<<endl;
Labour l1("Uttkarsh",420);
l1.display();
cout<<"-----------------------------------------------------"<<endl;
return 0;
}
