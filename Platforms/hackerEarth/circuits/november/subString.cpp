#include <iostream>
#include <string.h>
#include <fstream>
#include <cstdio>
using namespace std;

bool checkStat(char str[], int t, int length, char a[])
{
    int t1;

    for (t1 = t; t1 < length; t1++)
    {

        if (str[t1] == a[t1])
            continue;

        if (t1 == length - 1)
            return 1;
    }
}

void sortAlpha(char str[])
{
    char temp;
    for (int i = 0; i < strlen(str) - 1; i++)
    {
        for (int b = i + 1; b < strlen(str); b++)
        {
            if (str[i] > str[b])
            {
                temp = str[i];
                str[i] = str[b];
                str[b] = temp;
            }
        }
    }
}

void getStat(char str[], char a[], int t1)
{
    int t2, ch;
    for (ch = 0; ch < strlen(a); ch++)
    {
        for (t2 = t1; t2 < strlen(str); t2++)
        {
            str[t2] = str[t2 + 1];
        }
    }
    sortAlpha(str);
}

int main()
{
    int T;
    char str[10000];

    // ifstream fin("input.in");
    // ofstream fout("output.out");
    cin >> T;
    while (T--)
    {

        char a[10000], b[10000];
        unsigned long int i, j;
        i = 1, j = 0;
        int t, k;
        int flag = 0;
        int l, m;
        cin >> str;
        int length = strlen(str);
        for (l = 0; l < length; l++)
        {

            for (k = l + 1; k < length && !flag; k++)
            {
                if (str[l] == str[k])
                {
                    int temp = l;
                    int temp2 = k;
                    while (str[temp] == str[temp2])
                    {
                        a[j] = str[temp2];
                        temp++;
                        temp2++;
                        j++;
                        flag = 1;
                    }
                }
                else
                    continue;
            }
        }

        while (str[i] == str[j])
        {
            a[j] = str[j];
            i++;
            j++;
        }
        i -= j;

        for (t = 0; t < length; t++)
        {
            for (int t1 = t + 1; t1 < length; t1++)
            {
                if (str[t1] == a[t])
                {

                    if (checkStat(str, t, length, a))
                    {
                        getStat(str, a, t1);
                    }
                }
            }
        }
        cout << str << endl;
    }
}