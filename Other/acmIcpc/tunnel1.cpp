#include <iostream>
using namespace std;

int main()
{
    int n, cnt = 1, ind = 0;
    cin >> n;
    int m = (n * 4) - 1;
    int *a = new int[m];
    int *p = new int[n];
    int t;

    for (t = 0; t < n; t++)
    {
        cin >> p[t];
    }

    for (t = 0; t < m; t++)
    {
        if (t % 2 != 0)
        {

            a[t] = p[ind];
            // cnt++;
            ind++;
            // cout << p[ind] << endl;
        }
        else
            a[t] = 0;
    }

    for (t = 0; t <= m; t++)
    {
        cout << a[t] << " ";
    }
}