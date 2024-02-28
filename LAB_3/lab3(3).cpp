#include <iostream>
#include <string>
using namespace std;
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void simplify(int &num, int &denom)
{
    int commonDivisor = gcd(num, denom);
    num /= commonDivisor;
    denom /= commonDivisor;
}
void add(int a, int b, int c, int d)
{
    int num = (a * d) + (b * c);
    int denom = b * d;
    simplify(num, denom);
    cout << "Result: " << num << "/" << denom << endl;
}
void subtract(int a, int b, int c, int d)
{
    int num = (a * d) - (b * c);
    int denom = b * d;
    simplify(num, denom);
    cout << "Result: " << num << "/" << denom << endl;
}
void multiply(int a, int b, int c, int d)
{
    int num = a * c;
    int denom = b * d;
    simplify(num, denom);
    cout << "Result: " << num << "/" << denom << endl;
}
void divide(int a, int b, int c, int d)
{
    int num = a * d;
    int denom = b * c;
    simplify(num, denom);
    cout << "Result: " << num << "/" << denom << endl;
}
int main()
{
    int a, b, c, d;
    char operation;
    cout << "Enter the first fraction (a/b): ";
    cin >> a >> b;
    cout << "Enter the operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter the second fraction (c/d): ";
    cin >> c >> d;
    switch (operation)
    {
    case '+':
        add(a, b, c, d);
        break;
    case '-':
        subtract(a, b, c, d);
        break;
    case '*':
        multiply(a, b, c, d);
        break;
    case '/':
        divide(a, b, c, d);
        break;
    default:
        cout << "Wrong Choice" << endl;
    }
    return 0;
}