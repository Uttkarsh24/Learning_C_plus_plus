#include<iostream>
using namespace std;

class Shape{  ///SHAPE CLASS
protected:
    double l,b;
public:
    void get_data(double,double);
    void virtual display_area();
};

void Shape::get_data(double x,double y){
    l=x;
    b=y;
}

void Shape::display_area(){
    cout<<"Area:"<<l*b<<endl;
}

class Rectangle:public Shape{ ///RECTANGLE CLASS
public:
    void get_data(double,double);
    //Task C achieved here by removing display_area in rectangle class
};

void Rectangle::get_data(double x,double y){
    l=x;
    b=y;
}

class Triangle:public Shape{  ///TRIANGLE CLASS
public:
    void get_data(double,double);
    void display_area();
};

void Triangle::get_data(double x,double y){
    l=x;
    b=y;
}

void Triangle::display_area(){
    cout<<"Area of Triangle:"<<(0.5*l*b)<<endl;
}

class Circle:public Shape{  ///CIRCLE CLASS
public:
    void get_data(double,double);
    void display_area();
};

void Circle::get_data(double x,double y=0.0){
    l=x;
    b=y;
}

void Circle::display_area(){
    cout<<"Area of circle:"<<(3.14*l*l)<<endl;
}

int main(){ //MAIN FUNCTION
    Shape s1;
    Shape *p1=&s1;

    Rectangle r1;
    Rectangle *p2=&r1;
    p2->get_data(4.0,5.0);
    p1=&r1;
    p1->display_area();

    Triangle t1;
    Triangle *p3=&t1;
    p3->get_data(6.0,9.0);
    p1=&t1;
    p1->display_area();

    Circle c1;
    Circle *p4=&c1;
    p4->get_data(4.0);
    p1=&c1;
    p1->display_area();

    return 0;
}

