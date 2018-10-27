#include <iostream>
#include <string.h>
using namespace std;

void rotateStr(int i, char s1[], int n)
{
    char tempo;
    int t;
    tempo = s1[i];
    for (t = i; t < n; t++)
    {
        s1[t] = s1[t + 1];
    }
    s1[n - 1] = tempo;
}

int main()
{

    char temp, s1[100], s2[100];
    int i;

    cin >> s1 >> s2;
    int n = strlen(s1);
    for (i = 0; i < n; i++)
    {
        if (s1[i] == s2[i])
            continue;

        else
        {
            rotateStr(i, s1, n);
        }
    }
    if (!strcmp(s1, s2))
        cout << "YES" << '\n';

    else
        cout << "NO" << '\n';
}
