#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char url[50] = "nabi s sd";
    int n = strlen(url) + 1;
    for (int t = 0; t < n; t++)
    {
        if (url[t] == ' ')
        {
            n += 2;
            for (int j = n; j >= t + 1; j--)
                url[j + 2] = url[j];
        }
    }

    for (int t = 0; t < n; t++)
    {
        if (url[t] == ' ')
        {
            url[t] = '%';
            url[t + 1] = '2';
            url[t + 2] = '0';
        }
    }

    cout << url;
}