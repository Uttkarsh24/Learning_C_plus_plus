#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
int main()
{
    int num1, num2;
    cout << "Enter two numbers:";
    cin >> num1 >> num2;
    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    swap(num1, num2);
    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    return 0;
}