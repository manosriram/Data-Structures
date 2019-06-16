#include <iostream>
using namespace std;

int maxProduct(int a[], int n)
{
    int currentProd = 1, maxProd = INT_MIN;
    for (int t = 0; t < n; t++)
    {
        currentProd *= a[t];

        if (currentProd > maxProd)
            maxProd = currentProd;

        if (currentProd <= 0)
            currentProd = 1;
    }
    return maxProd;
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