#include<iostream>
using namespace std;
class Complex{
    int re,im;
public:
    Complex();
    Complex(int,int);
    void Get();
    Complex Sum(Complex&,Complex&);
    void Display(Complex&);
};
Complex::Complex()
{
    re=0;
    im=0;
}
Complex::Complex(int x,int y)
{
    re=x;
    im=y;
}
void Complex::Get()
{
    cout<<"Enter real and imaginary:"<<endl;
    cin>>re>>im;
}
Complex Complex::Sum(Complex& ob1,Complex& ob2)
{
    Complex temp;
    temp.re=ob1.re+ob2.re;
    temp.im=ob1.im+ob2.im;
    return temp;
}
void Complex::Display(Complex& ob1)
{
    cout<<"Sum="<<ob1.re<<"+"<<ob1.im<<"i"<<endl;
}
int main()
{
    Complex ob1,ob2;
    ob1.Get();
    ob2.Get();
    Complex ob3=ob3.Sum(ob1,ob2);
    ob3.Display(ob3);
}
