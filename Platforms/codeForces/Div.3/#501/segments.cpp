#include <iostream>
using namespace std;

int main()
{
    int n, m, b[1000], a[1000];
    int i, j, t;

    cin >> n >> m;

    for (t = 0; t < 2 * n; t++)
        cin >> a[t];

    int count = 0;
    for (i = 1; i <= m; i++)
    {
        int flag = 0;
        for (j = 0; j < 2 * n; j++)
        {
            if (j % 2 == 0)
            {
                if ((i > a[j] && i < a[j + 1])) // Element is found.
                {
                    break;
                }
                else if (i == a[j] || i == a[j + 1])
                {
                    break;
                }
                else
                {
                    // j++;
                    cout << i << " ";
                    break;
                }
            }
            j++;
        }
        //     if (flag)
        //     {
        //         b[count] = i;
        //         count++;
        //     }
        // }
        // for (t = 0; t < count; t++)
        //     cout << b[t] << " ";
    }
}