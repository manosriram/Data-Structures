#include <iostream>
#include "hashTable.h"
using namespace std;

int main()
{
    int n, a[100], t;

    HashMap hash;

    // cin >> n;
    hash.Insert(1, 3);
    hash.Insert(2, 3);
    // hash.Insert(3, 3);
    // hash.Insert(4, 3);
    // hash.Insert(5, 3);
    // hash.Insert(1, 3);
    hash.Display();
}
