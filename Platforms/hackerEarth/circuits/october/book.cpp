#include <iostream>
using namespace std;

int main()
{
    int P, H, T, S, x, i, sum = 0;

    cin >> P >> S >> T >> H >> x;

    for (i = 1; i <= x; i++)
    {
        if (S <= T)
            P = H;

        sum += P;

        S -= 1;
    }

    cout << sum << endl;
}