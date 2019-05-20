#include <iostream>
using namespace std;

int getMaxIndex(int n, int a[])
{
    int ind = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (a[i] <= a[j])
            {
                if ((j - i) > ind)
                    ind = j - i;
            }
        }
    }
    return ind;
}

int main()
{
    int n, T;
    cin >> T;
    while (T--)
    {
        cin >> n;
        int *a = new int[n];

        for (int t = 0; t < n; t++)
            cin >> a[t];

        cout << getMaxIndex(n, a) << '\n';
    }
}