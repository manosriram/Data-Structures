#include <iostream>
#include <set>
#include <math.h>
#include <string.h>

using namespace std;

bool searchStr(char str[], char N[], string res[0], int t1)
{
    int t, k, cnt = 0;
    for (t = t1; t < strlen(N); t++)
    {
        for (k = t; k < strlen(N); k++)
        {
            if (res[0][k] == N[t])
                cnt++;
        }
    }
    if (cnt == strlen(N))
        return 1;

    else
        return 0;
}

int main()
{
    static int count;
    int t, j, k;
    char N[100], str[100];
    string res[1];
    cin >> N;
    strcpy(str, N);
    int n = strlen(N);

    for (t = 0; t < n; t++)
    {
        for (j = t + 1; j < n; j++)
        {
            if (N[t] == N[j])
            {
                for (k = j; k < n; k++)
                {
                    N[k] = N[k + 1];
                }
            }
        }
    }

    for (t = 0; t < strlen(str); t++)
    {
        res[0] = "";
        for (j = t; j < strlen(N); j++)
        {
            res[0] += N[j];
            cout << "res = " << res[0] << endl;
        }
        // cout << res[0] << endl;
        if (searchStr(str, N, res, t))
            count++;
    }
    cout << count << endl;
    // cout << N << endl;
}