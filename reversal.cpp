#include <iostream>
using namespace std;

int main()
{
    int n, a[100], i, j;
    int t;
    cin >> n;

    for (t = 0; t < n; t++)
        cin >> a[t];

    i = 0;
    j = n - 1;
    while (i < j)
    {
        int temp;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }

    for (t = 0; t < n; t++)
        cout << a[t] << " ";
}