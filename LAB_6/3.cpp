#include <iostream>
#include <string>
using namespace std;

class Concat
{
    string str;

public:
    Concat(string n = "") : str(n){};
    Concat operator+(Concat &);
    void Display();
};
Concat Concat::operator+(Concat &other)
{
    Concat result;
    result.str = str + other.str;
    return result;
}
void Concat::Display()
{
    cout << str << endl;
}
int main()
{
    Concat str1, str2;
    Concat str3("Hello"), str4("World");
    Concat result = str3 + str4;
    cout << "Result: ";
    result.Display();
    return 0;
}