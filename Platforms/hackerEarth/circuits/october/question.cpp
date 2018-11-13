#include <iostream>
using namespace std;

int fac(unsigned int n)
{
    unsigned long long factorial = 1;
    for (int i = 1; i <= n; ++i)
    {
        factorial *= i;
    }
    return factorial - 1;
}

int main()
{
    int N, a, b, T;

    cin >> T;

    while (T--)
    {
        cin >> N >> a >> b;
        int u = fac(N);
        cout << u + 3 << endl;
    }
}