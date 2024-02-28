#include <bits/stdc++.h>
using namespace std;
void minmax(int a[], int x, int *mn, int *mx)
{
    if (x == 0)
        return;
    *mn = a[0];
    *mx = a[0];
    for (int i = 1; i < x; i++)
    {
        if (a[i] < *mn)
            *mn = a[i];
        if (a[i] > *mx)
            *mx = a[i];
    }
}
int main()
{
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    int a[n];
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mn, mx;
    minmax(a, n, &mn, &mx);
    cout << "Minimum value: " << mn << endl;
    cout << "Maximum value: " << mx << endl;
    return 0;
}