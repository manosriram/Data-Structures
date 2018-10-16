#include <iostream>
#include "hashTable.h"

int main()
{
    HashMap hash;
    int n, a[100], b[100];

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        hash.Insert(a[i], 0);
    }
    hash.removeDuplicates();
}