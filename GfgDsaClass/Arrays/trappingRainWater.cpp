#include <iostream>
#include <algorithm>
using namespace std;

int getSecondGreatest(int n, int a[])
{
    sort(a, a + n);
    return a[n - 2];
}

int getTotalTrappedWater(int n, int a[])
{
    int lastInteger = getSecondGreatest(n, a), sum = 0;

    for (int t = 1; t < n; t++)
    {
        if (lastInteger - a[t] > 0 && a[t] != lastInteger)
            sum += lastInteger - a[t];
    }
    return sum;
}

int main()
{
    int n;

    cin >> n;
    int *a = new int[n];

    for (int t = 0; t < n; t++)
        cin >> a[t];

    cout << getTotalTrappedWater(n, a) << '\n';
}