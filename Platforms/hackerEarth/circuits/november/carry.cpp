#include <iostream>
using namespace std;

unsigned long long int  getCarry(unsigned long long int n, unsigned long long int m)
{
    unsigned long long int res, multiplier = 1, bitSet, result = 0;
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
        result = getCarry(n, m);
        realResult = (n + m);
        cout << -(result - realResult) << endl;
    }
}