#include <iostream>
using namespace std;
int length(char st[])
{
    int c = 0;
    for (int i = 0;; i++)
    {
        if (st[i] == '\0')
        {
            break;
        }
        c++;
    }
    return c;
}
int main()
{
    char st[100];
    cin >> st;
    int len = length(st);
    cout << len;
    return 0;
}