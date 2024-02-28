#include <iostream>
#include <cstring>
using namespace std;
bool strend(const char *s, const char *t)
{
    int s_len = strlen(s);
    int t_len = strlen(t);
    if (t_len > s_len)
    {
        return false;
    }
    return (strcmp(s + s_len - t_len, t) == 0);
}
int main()
{
    char s[100];
    char t[100];
    cout << "Enter the string s: ";
    cin.getline(s, sizeof(s));
    cout << "Enter the string t: ";
    cin.getline(t, sizeof(t));
    if (strend(s, t))
    {
        cout << "Output: 1" << endl;
    }
    else
    {
        cout << "Output: 0" << endl;
    }
    return 0;
}