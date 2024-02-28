#include <bits/stdc++.h>
using namespace std;
void round(int a, int b)
{
    if (a % b == 0)
    {
        while (a % b == 0)
        {
            a = a + 1;
        }
    }
    else
    {
        while (a % b != 0)
        {
            a = a + 1;
        }
    }
    cout << a;
}
int main()
{
    int x, y;
    cout << "Enter x and y:";
    cin >> x >> y;
    round(x, y);
    return 0;
}