#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int removeFirst(int n)
{
    int tmp(0);
    for (int i(0);; ++i)
    {
        int m = n % 10;
        n /= 10;
        if (n != 0)
        {
            tmp += std::pow(10, i) * m;
        }
        else
        {
            break;
        }
    }
    return tmp + 1;
}

bool primed(int n)
{
    int i;
    bool isPrime = true;

    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int removeLast(int n)
{
    return floor(n / 10);
}

int main()
{
    int a, T;
    int s, flag = 0;
    cin >> T;
    int alice = 1;
    int bob = 0;
    while (T--)
    {
        cin >> s;
        int Digits = floor(log10(abs(s))) + 1;

        for (int t = 0; t < Digits; t++)
        {

            int h = removeFirst(s);
            if (primed(h))
                cout << "Alice" << '\n';
        }
    }
}