#include <iostream>
using namespace std;
int a[4][4];
int check(int b[4][4])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << b[i][j] << '\t';
        }
        cout << '\n';
    }
    if (b[0][0] == b[0][1] && b[0][1] == b[0][2])
    {
        return 0;
    }
    else if (b[1][0] == b[1][1] && b[1][1] == b[1][2])
    {
        return 0;
    }
    else if (b[2][0] == b[2][1] && b[2][1] == b[2][2])
    {
        return 0;
    }
    else if (b[0][0] == b[1][1] && b[1][1] == b[2][2])
    {
        return 0;
    }
    else if (b[0][2] == b[1][1] && b[1][1] == b[2][0])
    {
        return 0;
    }
    else if (b[0][0] == b[1][0] && b[1][1] == b[2][0])
    {
        return 0;
    }
    else if (b[0][1] == b[1][1] && b[1][1] == b[2][1])
    {
        return 0;
    }
    else if (b[0][2] == b[1][2] && b[1][2] == b[2][2])
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int i, j, l1, l2, t = 1, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            a[i][j] = t;
            t++;
            cout << a[i][j] << '\t';
        }
        cout << '\n';
    }
    for (k = 0; k < 9; k++)
    {
        cout << "player 1:";
        cin >> l1;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (a[i][j] == l1)
                {
                    a[i][j] = 0;
                    break;
                }
            }
        }
        int x = check(a);
        if (x == 0)
        {
            cout << "player 1 win\n";
            cout << "game over\n";
            return 0;
        }
        else
        {
            cout << "player 2:";
            cin >> l2;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    if (a[i][j] == l2)
                    {
                        a[i][j] = 10;
                        break;
                    }
                }
            }
            int y = check(a);
            if (y == 0)
            {
                cout << "player 1 win\n";
                cout << "game over\n";
                return 0;
            }
        }
    }
}