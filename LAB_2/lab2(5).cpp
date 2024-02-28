#include <bits/stdc++.h>
using namespace std;
struct Complex
{
    float real;
    float img;
};
struct Complex addComplex(struct Complex num1, struct Complex num2)
{
    struct Complex result;
    result.real = num1.real + num2.real;
    result.img = num1.img + num2.img;
    return result;
}
int main()
{
    struct Complex num1, num2, sum;
    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> num1.real >> num1.img;
    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> num2.real >> num2.img;
    sum = addComplex(num1, num2);
    cout << "Sum = " << fixed << setprecision(2) << sum.real << " + " << sum.img << "i" << endl;
    return 0;
}