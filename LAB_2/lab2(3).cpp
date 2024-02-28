#include <iostream>
#include <cstring>
using namespace std;
int cmpStrings(const char *str1, const char *str2)
{
    while (*str1 && *str2 && *str1 == *str2)
    {
        str1++;
        str2++;
    }
    if (*str1 == '\0' && *str2 == '\0')
    {
        return 0;
    }
    else
    {
        return *str1 - *str2;
    }
}
int main()
{
    char str1[100], str2[100];
    cout << "Enter the first string: ";
    cin.getline(str1, sizeof(str1));
    cout << "Enter the second string: ";
    cin.getline(str2, sizeof(str2));
    int result = cmpStrings(str1, str2);
    if (result == 0)
    {
        cout << "The strings are equal." << endl;
    }
    else if (result < 0)
    {
        cout << "The second string is greater." << endl;
    }
    else
    {
        cout << "The first string is greater." << endl;
    }
    return 0;
}