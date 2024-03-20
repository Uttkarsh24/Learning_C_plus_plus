#include<iostream>
using namespace std;
class Distance{
    int feet;
    int inches;
public:
    Distance();
    Distance(int,int);
    Distance operator +(Distance&);
    Distance operator -(Distance&);
    Distance operator +=(int);
    Distance operator -=(int);
    bool operator >(Distance&);
    bool operator <(Distance&);
    void Display();
} ;

Distance::Distance(){
feet=0;
inches=0;
}

Distance::Distance(int x,int y){
feet=x;
inches=y;
}

Distance Distance::operator +(Distance& ob){
return Distance(this->feet+ob.feet,this->inches+ob.inches);
}

Distance Distance::operator -(Distance& ob){
return Distance(this->feet-ob.feet,this->inches-ob.inches);
}

Distance Distance::operator +=(int x){
    this->feet=this->feet+x;
    this->inches=this->inches+x;
    return *this;
}

Distance Distance::operator -=(int x){
    this->feet=this->feet-x;
    this->inches=this->inches-x;
    return *this;
}

bool Distance::operator >(Distance& ob){
    if((this->feet+(this->inches*12))>(ob.feet+(ob.inches*12)))
    return true;
    else
    return false;
}

bool Distance::operator <(Distance& ob){
    if((this->feet+(this->inches*12))<(ob.feet+(ob.inches*12)))
    return true;
    else
    return false;
}

void Distance::Display(){
cout<<feet<<" "<<inches<<endl;
}

int main()
{
    Distance ob1(4,5);
    Distance ob2(6,9);
    Distance ob3=ob1+ob2;
    ob3.Display();
    Distance ob4=ob2-ob1;
    ob4.Display();
    ob3+=1;
    ob4-=1;
    ob3.Display();
    ob4.Display();
    if(ob2>ob1==true)
        cout<<"ob2 is greater"<<endl;
    if(ob1>ob2==true)
        cout<<"ob1 is greater"<<endl;
}
