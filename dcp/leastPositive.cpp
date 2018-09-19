#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int t, a[100], n;

    cin >> n;

    for (t = 0; t < n; t++)
        cin >> a[t];

    int n1 = sizeof(a) / sizeof(a[0]);

    sort(a, a + n);

    for (t = 0; t < n; t++)
    {
        if (a[t] > 0)
        {
            if (a[t + 1] - 1 == a[t])
                continue;

            else
            {
                cout << a[t] + 1;
                break;
            }
        }
    }
}