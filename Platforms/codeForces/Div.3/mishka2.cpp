#include <iostream>
using namespace std;
static int len;

void getLenBackwards(int t, int n, int a[], int k)
{
    int y;
    for (y = n - 1; y >= t; y--)
    {
        if (a[y] <= k)
            len++;

        if (a[y] > k)
            return;
    }
}

int main()
{
    int a[150];
    int n, t, k;

    cin >> n >> k;

    for (t = 0; t < n; t++)
        cin >> a[t];

    for (t = 0; t < n; t++)
    {

        if (a[t] <= k)
            len++;

        if (a[t] > k)
        {
            getLenBackwards(t, n, a, k);
            break;
        }
    }
    cout << len;
}