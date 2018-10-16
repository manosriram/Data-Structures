#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, k, a[100000], t, i, j, pairs = 0;

    cin >> n >> k;

    for (t = 0; t < n; t++)
        cin >> a[t];

    sort(a, a + n);

    for (i = 0; i < n; i++)
    {
        for (j = n - 1; j >= 0 && a[j] >= k; j--)
        {
            if (a[j] - a[i] == k || abs(a[i] - a[j]) == k))
                pairs++;
        }
    }

    cout << pairs << '\n';
}