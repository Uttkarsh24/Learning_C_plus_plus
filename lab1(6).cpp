#include <iostream>
using namespace std;
bool check(int num)
{
    for (int i = 1; i * i <= num; i++)
    {
        if (num == i * i)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    for (int a = 1; a <= 9; a++)
    {
        for (int b = 0; b <= 9; b++)
        {
            if (a != b)
            {
                int num = a * 1100 + a * 11 + b * 10 + b;
                if (check(num))
                {
                    cout << num << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No Number Found." << endl;
    return 0;
}