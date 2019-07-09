#include <iostream>
#include "Build.h"
#include "BuildHelper.h"
using namespace std;

int main()
{
    // int a[] = {11212, 2, 3000, -1, 12, 212};
    int a[] = {0, 0, 0, 0, 0};
    int n = sizeof(a) / sizeof(a[0]);
    int *tree = buildTree(a);

    buildTreeDiff(a, tree, 0, n - 1, 1);
    updateDiffTree(tree, a, 1, 3, 0, n - 1, 1, 3);
    printTree(tree, n);
}