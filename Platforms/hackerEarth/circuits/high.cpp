#include <iostream>
#include <algorithm>
using namespace std;

void resetArray(int a[], int n, int b[])
{
    for (int t = 0; t < n; t++)
    {
        a[t] = b[t];
    }
}

int subA(int a[], int n)
{
    int max, sum;
    int i, j;

    max = a[0];

    for (i = 0; i < n; i++)
    {
        sum = a[i];

        for (j = i + 1; j < n - i; j++)
        {
            sum += a[j];

            if (sum > max)
                max = sum;
        }
    }
    return max;
}

void rotateA(int l, int r, int a[])
{
    int temp;
    int t1;
    temp = a[l];

    for (t1 = l; t1 < r; t1++)
    {
        a[t1] = a[t1 + 1];
    }
    a[r] = temp;
}

int main()
{
    int n, a[1000], b[1000];
    int t;
    int le, ri, q;
    cin >> n >> q;

    for (t = 0; t < n; t++)
    {
        cin >> a[t];
        // b[t] = a[t];
    }

    for (t = 0; t < q; t++)
    {
        cin >> le >> ri;
        rotateA(le - 1, ri - 1, a);

        cout << subA(a, n) << endl;
        // resetArray(a, n, b);
    }
}
