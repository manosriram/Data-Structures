#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int maxProduct(int a[], int n)
{
    int temp = 1;
    int store[n];
    int count = 0;

    a[n] = INT_MIN;

    for (int t = 0; t < n; t++)
    {
        temp *= a[t];

        if ((a[t] >= 0 && a[t + 1] < 0) || (a[t] < 0 && a[t + 1] >= 0))
        {
            store[count] = temp;
            count++;
            temp = 1;
        }
    }
    store[count] = temp;
    count++;

    sort(store, store + count);
    return store[count - 1];
}

int main()
{
    int n;
    cin >> n;
    int a[100];

    for (int t = 0; t < n; t++)
        cin >> a[t];

    cout << maxProduct(a, n) << '\n';
}