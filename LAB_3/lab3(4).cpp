#include <iostream>
using namespace std;
void add(int a, int b, int c)
{
    cout << a + b + c << endl;
}
void add(float a, float b, float c)
{
    cout << a + b + c << endl;
}
void add(double a, double b, double c)
{
    cout << a + b + c << endl;
}
void add(long double a, long double b, long double c)
{
    cout << a + b + c << endl;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    add(a, b, c);
}