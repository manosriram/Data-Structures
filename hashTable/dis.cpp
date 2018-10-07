#include <iostream>
#include "hashTable.h"
using namespace std;

int main()
{
    int n, a[100];
    HashMap hash;
    cin >> n;

    for (int t = 0; t < n; t++)
    {
        cin >> a[t];
        hash.Insert(a[t], 0);
    }
    hash.disc();
}