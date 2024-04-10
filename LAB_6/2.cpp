#include <iostream>
using namespace std;

class Rational
{
    int numerator, denominator;
public:
    Rational(int num = 0, int denom = 1) : numerator(num), denominator(denom){};
    void input();
    int gcd(int, int);
    void simplify();
    void display();
    Rational operator+(Rational &);
    Rational operator-(Rational &);
    Rational operator*(Rational &);
    Rational operator/(Rational &);
};
void Rational::input()
{
    cout << "Enter the numerator: ";
    cin >> numerator;
    cout << "Enter the denominator: ";
    cin >> denominator;
    if (denominator == 0)
    {
        cout << "Invalid input. Denominator cannot be zero." << endl;
        denominator = 1;
    }
}
void Rational::display()
{
    cout << numerator << "/" << denominator << endl;
}
int Rational::gcd(int a, int b)
{
    while (b)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void Rational::simplify()
{
    int common_divisor = gcd(numerator, denominator);
    numerator /= common_divisor;
    denominator /= common_divisor;
}
Rational Rational::operator+(Rational &other)
{
    Rational result;
    result.numerator = numerator * other.denominator + other.numerator * denominator;
    result.denominator = denominator * other.denominator;
    result.simplify();
    return result;
}
Rational Rational::operator-(Rational &other)
{
    Rational result;
    result.numerator = numerator * other.denominator - other.numerator * denominator;
    result.denominator = denominator * other.denominator;
    result.simplify();
    return result;
}
Rational Rational::operator *(Rational &other)
{
    Rational result;
        result.numerator = numerator * other.numerator;
        result.denominator = denominator * other.denominator;
        result.simplify();
        return result;
}
Rational Rational::operator /(Rational &other)
{
     if (other.numerator == 0) {
            cout << "Cannot divide by zero." << endl;
            return Rational();
        }
        Rational result;
        result.numerator = numerator * other.denominator;
        result.denominator = denominator * other.numerator;
        result.simplify();
        return result;
}
int main() {
    Rational rational1, rational2;
    cout << "Enter values for rational1:" << endl;
    rational1.input();
    cout << "Enter values for rational2:" << endl;
    rational2.input();
    cout << "Rational1: ";
    rational1.display();
    cout << "Rational2: ";
    rational2.display();
    cout << "Addition: ";
    (rational1 + rational2).display();
    cout << "Subtraction: ";
    (rational1 - rational2).display();
    cout << "Multiplication: ";
    (rational1 * rational2).display();
    cout << "Division: ";
    Rational result = rational1 / rational2;
    result.display();
    return 0;
}