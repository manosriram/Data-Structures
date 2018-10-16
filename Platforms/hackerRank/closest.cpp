#include <iostream>
using namespace std;

int main()
{
    int a[100000], b[100000], i, j, n, t;
    int min, count = 0;

    cin >> n;

    for (t = 0; t < n; t++)
        cin >> a[t];

    min = a[n - 1] - a[n - 2];

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n - i; j++)
        {
            if (a[j] - a[i] <= min)
            {
                if (a[j] - a[i] == min)
                {
                    b[count] = a[i];
                    count++;
                    b[count] = a[j];
                    count++;
                }
            }
        }
    }
    for (i = 0; i < count; i++)
        cout << b[i] << " ";
}