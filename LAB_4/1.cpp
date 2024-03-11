/*Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'.
Include member functions ‘setdata()’ and ‘showdata()’ to take the input and display the output.
Write main function to test your class.*/

#include<iostream>
#include<string.h>
using namespace std;

class Student{
    char name[20];
    int roll_no;
public:
    void setData(char[],int);
    void showData();
};
void Student::setData(char n[],int id)
{
    strcpy(name,n);
    roll_no=id;
}
void Student::showData()
{
    cout<<"Name of Student:"<<name<<endl;
    cout<<"Roll no:"<<roll_no<<endl;
}
int main()
{
    Student s;
    s.setData("Uttkarsh",420);
    s.showData();
}
