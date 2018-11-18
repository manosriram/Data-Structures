#include <iostream>
using namespace std;

int main()
{
    int m, n, T;

    while (T--)
    {

        cin >> m >> n;

        int o = m + n;

        while (o > 0)
        {
            int o1 = o % 10;
            cout << o1;
            o1 /= 10;
        }
    }
}