#include <iostream>
using namespace std;
int main()
{
    int r, c;

    int T;
    int i, j;

    cin >> T;
    while (T--)
    {
        int flag = 0;

        cin >> r >> c;

        char **a = new char *[r];

        for (i = 0; i < r; i++)
            a[i] = new char[c];

        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                cin >> a[i][j];
            }
        }

        for (i = 0; i < r - 1; i++)
        {
            for (j = 0; j < c - 1; j++)
            {
                if (a[i][j] == '#' || a[i][j + 1] == '#' || a[i + 1][j] == '#' || a[i + 1][j + 1] == '#')
                {
                    break;
                }
                else
                {
                    a[i][j] = 'c';
                    a[i][j + 1] = 'c';
                    a[i + 1][j] = 'c';
                    a[i + 1][j + 1] = 'c';
                }
            }
        }

        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (a[i][j] == '.')
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (!flag)
            cout << "YES" << '\n';

        else
            cout << "NO" << '\n';

        for (i = 0; i < r; i++)
            delete[] a[i];

        delete[] a;
    }
}