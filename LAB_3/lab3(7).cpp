#include <iostream>
using namespace std;
class shirt
{
public:
    double collarsize;
    double sleevelength;
    void get()
    {
        cout << "Enter collar size and sleeve length:" << endl;
        cin >> collarsize >> sleevelength;
    }
    void displayClothingSize();
};
class pants
{
public:
    double waistsize;
    double inseam;
    void get()
    {
        cout << "Enter waist size and Inseam:" << endl;
        cin >> waistsize >> inseam;
    }
    void displayClothingSize();
};
void shirt::displayClothingSize()
{
    shirt ob;
    cout << "Shirt Facts:" << endl;
    cout << "collar size:" << ob.collarsize << endl;
    cout << "Sleeve length:" << ob.sleevelength << endl;
}
void pants::displayClothingSize()
{
    pants ob;
    cout << "Shirt Facts:" << endl;
    cout << "waist size:" << ob.waistsize << endl;
    cout << "inSeam:" << ob.inseam << endl;
}
int main()
{
    shirt ob1();
    ob1.get()
        ob1.displayClothingFacts();
    pants ob2();
    ob2.get();
    ob2.displayClothingFacts();
    return 0;
}