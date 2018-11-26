#include <iostream>
using namespace std;

<<<<<<< HEAD
unsigned long int mod = 1000000009;
unsigned long long int getCarry(int n, int m)
=======
unsigned long long int  getCarry(unsigned long long int n, unsigned long long int m)
>>>>>>> 96d58849b69b75002c9227c6d95ebc9ee8e2ec6a
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
<<<<<<< HEAD
    }
    else
    {
        return n + m % mod;
    }

    return result;
=======
            return result;
>>>>>>> 96d58849b69b75002c9227c6d95ebc9ee8e2ec6a
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
<<<<<<< HEAD
        result = getCarry(n, m) % mod;
        realResult = (n + m) % mod;
=======
        result = getCarry(n, m);
        realResult = (n + m);
>>>>>>> 96d58849b69b75002c9227c6d95ebc9ee8e2ec6a
        cout << -(result - realResult) << endl;
    }
}