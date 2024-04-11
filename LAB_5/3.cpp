#include <iostream>
using namespace std;

class Demo{
    int data1, data2;
public:
    Demo(int,int);
    ~Demo();
    void Display();
};
Demo::Demo(int x,int y):data1(x),data2(y){
    cout<<"Demo Constructor called"<<endl;
}
void Demo::Display(){
    cout<<"Data1:"<<data1<<endl;
    cout<<"Data2:"<<data2<<endl;
}
Demo::~Demo(){
    cout<<"Destructor Called"<<endl;
}

Demo ob1(4,5); //Globally Declared Object

int main(){
    cout<<"constructor should be above this line."<<endl;
    cout<<"This is written in main section"<<endl;
    cout<<"Destructor should be below this line."<<endl;
    return 0;
}
