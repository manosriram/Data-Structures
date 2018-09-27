#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int i, j;
    char a[100];
    int n, temp, t;

    cin >> a;
    n = strlen(a);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n - i; j++)
        {
            if (a[i] == a[j])
            {
                // temp = a[n - 1];
                // a[n - 1] = a[j];
                // a[j] = temp;
                a[j] = a[n - 1];
                n -= 1;
            }
        }
    }
    for (t = 0; t < n / 2; t++)
        cout << a[t] << " ";
}