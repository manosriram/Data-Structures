#include <iostream>
#include "Build.h"
#include "BuildHelper.h"
using namespace std;

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(NULL);

    int a[] = {1, -2, 3, 4, 12, -21, 0};
    int n = sizeof(a) / sizeof(a[0]);

    int *tree = new int[(2 * n) + 1];
    buildTreeMinSum(a, tree, 0, n - 1, 1);

    // minSubArray(tree, start, end, startingRagnge, endingRange, treeIndex);
    cout << minSubArray(tree, 0, n - 1, 1, 3, 1) << endl;
}