#include <iostream>
using namespace std;

int main()
{
    int n, m, b[1000], a[1000];
    int count = 0;
    int i, j, t;
    cin >> n >> m;
    int cnt = 0;

    for (t = 0; t < 2 * n; t++)
        cin >> a[t];

    for (i = 1; i <= m; i++)
    {
        int flag = 0;
        for (j = 0; j < 2 * n; j++)
        {
            if (j % 2 == 0)
            {
                if ((i > a[j] && i < a[j + 1])) // Element is found.
                {
                    flag = 1;
                    count++;
                }
                else if (i == a[j] || i == a[j + 1]) // Element Equal to i.
                {
                    flag = 1;
                    count++;
                }
            }
            j++;
        }
        if (!flag)
        {
            b[cnt] = i;
            cnt++;
        }
    }

    cout << cnt << endl;
    for (t = 0; t < cnt; t++)
        cout << b[t] << " ";

    // if (count == i - 1)
    //     cout << "0" << endl;
}
