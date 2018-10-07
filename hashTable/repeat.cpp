#include <iostream>
#include <string.h>
#include "hashTable.h"

int main()
{
    HashMap hash;
    int n, t;
    char a[100];
    cin >> a;

    n = strlen(a);

    for (t = 0; t < n - 1; t++)
    {
        hash.Insert(a[t], t);
    }
}
