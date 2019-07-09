#include <iostream>
#include <algorithm>
using namespace std;

int findMissingInteger(int n, int a[])
{
    int t;
    sort(a, a + n);
    for (t = 0; t < n; t++)
        if (a[t] > 0)
            break;

    int temp = 1;
    for (int l = t; l < n; l++)
    {
        if (a[l] != temp)
            return temp;

        if (a[l] == a[l + 1])
            continue;

        temp++;
    }
    return temp;
}

int main()
{
    int n, t;
    cin >> n;
    int *a = new int[n];

    for (t = 0; t < n; t++)
        cin >> a[t];
    cout << findMissingInteger(n, a) << '\n';
}