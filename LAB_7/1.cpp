
#include<iostream>
#include<string>
using namespace std;

class Student{
protected:
    int roll_no;
    string name;
public:
    Student(string="",int=0);
};

Student::Student(string x,int y):name(x),roll_no(y){
    cout<<"Student constructor called."<<endl;
}

class Exam:public Student{
protected:
    int m1,m2,m3,m4,m5,m6;
public:
    Exam(string="",int=0,int=0,int=0,int=0,int=0,int=0,int=0);
};

Exam::Exam(string x,int ro,int x1,int x2,int x3,int x4,int x5,int x6) : Student(x,ro),m1(x1),m2(x2),m3(x3),m4(x4),m5(x5),m6(x6){
    cout<<"Exam class constructor called."<<endl;
}

class Result:public Exam{
protected:
    float total;
    float per;
public:
    Result(string x,int ro,int x1,int x2,int x3,int x4,int x5,int x6);
    void display();
};

Result::Result(string x,int ro,int x1,int x2,int x3,int x4,int x5,int x6):Exam(x,ro,x1,x2,x3,x4,x5,x6){
total=0.0;
per=0.0;
cout<<"Exam constructor called"<<endl;
}

void Result::display(){
cout<<"name:"<<name<<endl;
cout<<"Roll no:"<<roll_no<<endl;
total=m1+m2+m3+m4+m5+m6;
per=(total/600)*100;
cout<<"Total Marks(6 subjects):"<<total<<endl;
cout<<"Percentage:"<<per<<"%"<<endl;
}

int main(){
    Result r("Uttkarsh",420,90,90,90,90,90,90);
    r.display();
    return 0;
}
