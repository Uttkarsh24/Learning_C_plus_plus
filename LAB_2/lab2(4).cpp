#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE 10
void addMatrices(int a[][MAX_SIZE], int b[][MAX_SIZE], int result[][MAX_SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}
void displayMatrix(int m[][MAX_SIZE], int rows, int cols)
{
    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
}
int main()
{
    int a[MAX_SIZE][MAX_SIZE], b[MAX_SIZE][MAX_SIZE],
        result[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    cout << "Enter the number of rows and columns of the matrices: ";
    cin >> rows >> cols;
    cout << "Enter the elements of the first matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter the elements of the second matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> b[i][j];
        }
    }
    addMatrices(a, b, result, rows, cols);
    cout << "Resultant Matrix (Sum of Matrix 1 and Matrix 2):" << endl;
    displayMatrix(result, rows, cols);
    return 0;
}