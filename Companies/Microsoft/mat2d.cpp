#include <iostream>
#include <string.h>
using namespace std;
int r, c;

bool columnWise(int i, int j, char **a, char str[])
{
    int t;
    for (t = i; t < strlen(str); t++)
    {
        if (a[t][j] == str[t])
            continue;
        else
            return 0;
    }
    return 1;
}

bool rowWise(int i, int j, char **a, char str[])
{
    int t;
    for (t = j; t < strlen(str); t++)
    {
        if (a[i][t] == str[t])
            continue;
        else
            return 0;
    }
    return 1;
}

int main()
{
    int i, j, t;
    cin >> r >> c;

    char str[1000];

    char **a = new char *[r];
    for (int i = 0; i < r; ++i)
        a[i] = new char[c];

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> str;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (a[i][j] == str[0])
            {
                if (a[i + 1][j] == str[1])
                {
                    if (columnWise(i, j, a, str))
                        return 1;
                    else
                        continue;
                }
                else if (a[i][j + 1] == str[1])
                {
                    if (rowWise(i, j, a, str))
                        return 1;
                    else
                        continue;
                }
            }
        }
    }
}