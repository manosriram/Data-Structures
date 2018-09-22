#include <iostream>
using namespace std;

int main()
{
    int a[100], n, t, j;
    int b[100];
    int pro;

    cin >> n;

    for (t = 0; t < n; t++)
        cin >> a[t];

    for (t = 0; t < n; t++)
    {
        pro = 1;
        for (j = 0; j < n; j++)
        {
            if (j != t)
            {
                pro = pro * a[j];
            }
            else
                continue;
        }
        b[t] = pro;
    }

    for (t = 0; t < n; t++)
        cout << b[t] << " ";
}