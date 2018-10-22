#include <iostream>
using namespace std;

int main()
{
    int T, k, n, t;
    int a[1024];
    int sum;
    cin >> T;

    while (T--)
    {
        sum = 0;
        cin >> n >> k;

        for (t = 0; t < n; t++)
            cin >> a[t];

        for (t = 0; t < n - 1; t++)
        {
            if (a[t + 1] - a[t] > k)
                sum += 1;
        }
        cout << sum << endl;
    }
}