#include <iostream>
#include "Build.h"
#include "BuildHelper.h"
using namespace std;

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(NULL);

    int a[] = {7, 7, 11, 5, 15 , 5};
    int n = sizeof(a) / sizeof(a[0]);
    int *tree = new int[(2 * n) + 1];

    buildTreeSubSum(a, tree, 0, n - 1, 1);
    printTree(tree, n);

    int replaceWithNumber = 8;
    int replaceIndex = 3;
    int diff = max(a[replaceIndex], replaceWithNumber) - min(a[replaceIndex], replaceWithNumber);

    // updateTree(tree, 0, n-1, replaceIndex, 1, diff);
    printTree(tree, n);
}