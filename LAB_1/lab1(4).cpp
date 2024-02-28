#include<iostream>
using namespace std;
int check(int a[], int i)
{
    if (a[i] == i)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cin >> n;
    int flag = 0;
    int a[n];
    cout << "input:" << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "output:" << endl;
    for (int i = 0; i < n; i++)
    {
        if (check(a, i) == 1)
        {
            flag++;
            break;
        }
    }
    cout << flag << endl;
    return 0;
}