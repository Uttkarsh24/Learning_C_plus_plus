#include <bits/stdc++.h>
using namespace std;
int isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int highestOccurringDigit(int L, int R)
{
    int digitCount[10] = {0};
    for (int i = L; i <= R; ++i)
    {
        if (isPrime(i))
        {
            int num = i;
            while (num > 0)
            {
                ++digitCount[num % 10];
                num /= 10;
            }
        }
    }
    int maxOccurrences = -1;
    int digitOccurrence = -1;
    for (int i = 0; i < 10; ++i)
    {
        if (digitCount[i] > maxOccurrences || (digitCount[i] == maxOccurrences && i >
                                                                                      digitOccurrence))
        {
            maxOccurrences = digitCount[i];
            digitOccurrence = i;
        }
    }
    return (maxOccurrences > 0) ? digitOccurrence : -1;
}
int main()
{
    int L, R;
    cout << "Enter the range L and R: ";
    cin >> L >> R;
    int result = highestOccurringDigit(L, R);
    if (result == -1)
        cout << "No prime number occurs between " << L << " and " << R << endl;
    else
        cout << "Highest occurring digit in prime numbers between " << L << " and " << R << "is: " << result << endl;
                 return 0;
}