#include <iostream>
#include "Build.h"
#include "BuildHelper.h"
#include "LazyHelper.h"
using namespace std;

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(NULL);

    // int a[] = {7, 7, 11, 5, 15 , 5};
    int a[] = {2, 3, -1, 4};
    int n = sizeof(a) / sizeof(a[0]);
    int *tree = new int[(2 * n) + 1];
    int *lazy = new int[(2 * n) + 1];
    memset(lazy, 0, sizeof lazy);
    
    
}