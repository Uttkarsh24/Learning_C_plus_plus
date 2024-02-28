#include <bits/stdc++.h>
using namespace std;
void reverseArray(long double *arr, int size)
{
    long double temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    long double *arr = new long double[size];
    if (arr == nullptr)
    {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }
    cout << "Enter " << size << " elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    reverseArray(arr, size);
    cout << "Reversed array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}