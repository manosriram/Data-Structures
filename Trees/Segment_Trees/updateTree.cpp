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
    
    buildTreeSubSum(a, tree, 0, n - 1, 1);
    // printTree(tree, n);

    int replaceWithNumber = 8;
    int replaceIndex = 3;
    int diff = max(a[replaceIndex], replaceWithNumber) - min(a[replaceIndex], replaceWithNumber);

    printTree(tree, n);
    updateSubSumTree(tree, 0, n-1, 2, 7, 1);
    printTree(tree, n);
}