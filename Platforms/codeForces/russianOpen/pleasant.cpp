#include <iostream>
using namespace std;

int main()
{
    unsigned long long int n, tar;
    unsigned long long int t, j;
    unsigned long long cnt = 0;
    cin >> n >> tar;
    int *a = new int[n];

    for (t = 0; t < n; t++)
        cin >> a[t];
    unsigned long long int flag = 0;
    for (t = 0; t < n; t++)
    {
        if (a[t] == tar && a[t] == a[t + 1] && !flag)
        {
            cnt++;
            flag = 1;
            continue;
        }

        if (a[t] == a[t + 1] && flag && t == n - 1)
        {
            cout << cnt << endl;
            break;
        }

        if (flag)
            cnt++;

        else
            continue;
    }
    if (cnt == 0)
        cout << cnt << endl;
}