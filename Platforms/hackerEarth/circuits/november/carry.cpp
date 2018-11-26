#include <iostream>
#include <math.h>
using namespace std;

unsigned long int mod = 1000000009;
unsigned long long int getCarry(int n, int m)
{
    unsigned long long int res, multiplier = 1, bitSet, result = 0;
    if ((n % 10) + (n % 10) > 9)
    {
        while (n || m)
        {

            res = (n % 10) + (m % 10);
            bitSet = res % 10;
            bitSet *= multiplier % mod;
            result += bitSet % mod;
            n /= 10;
            m /= 10;
            multiplier *= 10;
        }
    }
    else
    {
        return n + m % mod;
    }

    return result;
}

int main()
{
    int T;
    unsigned long long int n, m;
    unsigned long long int result, realResult;

    cin >> T;

    while (T--)
    {
        cin >> n >> m;
        result = getCarry(n, m) % mod;
        realResult = (n + m) % mod;
        cout << -(result - realResult) << endl;
    }
}