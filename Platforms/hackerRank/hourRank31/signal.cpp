#include <iostream>
using namespace std;

int main()
{
    int n, T, RN, GN, BN, t, i;
    cin >> T >> RN >> GN >> BN;
    int yellow = 0, cyan = 0, magenta = 0, white = 0, black = 0, red = 0, green = 0, blue = 0;
    int *R = new int[RN];
    int *G = new int[GN];
    int *B = new int[BN];
    int flag = 0;
    // Red
    for (t = 0; t < T; t++)
    {
        if (t % RN == 0 && flag == 0)
        {
            for (i = t; i < t + RN; i++)
            {
                R[i] = 0;
            }
            flag = 1;
            // t = i + 1;
        }
        else if (t % RN == 0 && flag == 1)
        {
            for (i = t; i < t + RN; i++)
            {
                R[i] = 1;
            }
            flag = 0;
            // t = i + 1;
        }
    }
    //Green
    flag = 0;
    for (t = 0; t < T; t++)
    {
        if (t % GN == 0 && flag == 0)
        {
            for (i = t; i < t + GN; i++)
            {
                G[i] = 0;
            }
            flag = 1;
            // t = i + 1;
        }
        else if (t % GN == 0 && flag == 1)
        {
            for (i = t; i < t + GN; i++)
            {
                G[i] = 1;
            }
            flag = 0;
            // t = i + 1;
        }
    }

    //Blue
    flag = 0;
    for (t = 0; t < T; t++)
    {
        if (t % BN == 0 && flag == 0)
        {
            for (i = t; i < t + BN; i++)
            {
                B[i] = 0;
            }
            flag = 1;
            // t = i + 1;
        }
        else if (t % BN == 0 && flag == 1)
        {
            for (i = t; i < t + BN; i++)
            {
                B[i] = 1;
            }
            flag = 0;
            // t = i + 1;
        }
    }

    for (t = 0; t < T; t++)
    {
        if (R[t] == 1 && G[t] == 0 && B[t] == 0)
            red++;
        else if (R[t] == 0 && G[t] == 1 && B[t] == 0)
            green++;
        else if (R[t] == 0 && G[t] == 0 && B[t] == 1)
            blue++;
        else if (R[t] == 1 && G[t] == 1 && B[t] == 0)
            yellow++;
        else if (R[t] == 0 && G[t] == 1 && B[t] == 1)
            cyan++;
        else if (R[t] == 1 && G[t] == 0 && B[t] == 1)
            magenta++;
        else if (R[t] == 1 && G[t] == 1 && B[t] == 1)
            white++;
        else if (R[t] == 0 && G[t] == 0 && B[t] == 0)
            black++;
    }

    cout << red << " " << green << " " << blue << " " << yellow << " " << cyan << " " << magenta << " " << white << " " << black << endl;
}