#include <iostream>
#include "Build.h"
#include "BuildHelper.h"
using namespace std;

int main() {
    int a[] = {11212, 2, 3000, -1, 12, 212};
    int n = sizeof(a)/sizeof(a[0]);
    int *tree = buildTree(a);

    buildMaxSumArray(a, tree, 0, n-1, 1);
    printTree(tree, n);
}