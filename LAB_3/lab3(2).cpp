#include <iostream>
using namespace std;
void minmax(int array[], int length, int min, int max)
{
    int i;
    for (i = 0; i < length; i++)
    {
        if (array[i] > max)
            max = array[i];
        else if (array[i] < min)
            min = array[i];
        else
            continue;
    }
    cout << "maximum value=" << max << endl;
    cout << "minimum value=" << min;
}
int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    cout << "Enter elements of array:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    minmax(arr, n, arr[0], arr[0]);
    return 0;
}