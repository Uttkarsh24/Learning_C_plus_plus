#include <bits/stdc++.h>
using namespace std;
int MISSNO(int arr[], int n)
{
    int x = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++)
    {
        x = x - arr[i];
    }
    return x;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ms = MISSNO(arr, n);
    cout << ms;
    return 0;
}