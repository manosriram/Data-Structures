#include <iostream>
#include "Build.h"
#include "BuildHelper.h"
using namespace std;

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(NULL);

    // int a[] = {10, -8, 12, 3, 32, 2, -12, 0, -3};
    int a[] = {-1, 2, 4, 10};
    int n = sizeof(a) / sizeof(a[0]);
    int *tree = new int[(2 * n) + 1];

    buildTreeSubSum(a, tree, 0, n - 1, 1);
    cout << sumSubArrayQuery(tree, 0, n - 1, 0, 2, 1) << endl;
}