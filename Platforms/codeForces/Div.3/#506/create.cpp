#include <iostream>

using namespace std;

int main()
{
    int n;
    int i, j, count, max;
    int t, high;

    cin >> n;

    int *a = new int[n];

    for (t = 0; t < n; t++)
        cin >> a[t];

    max = 0;
    count = 1;
    high = a[n - 1] / 2;

    for (i = 0; i < n; i++)
    {
        if (count > max)
            max = count;

        int u = a[i] * 2;

        count = 1;
        for (j = i + 1; j < n && a[j] <= u; j++)
        {
            if (a[j] <= u)
                count++;
        }
    }
    cout << max << endl;
}