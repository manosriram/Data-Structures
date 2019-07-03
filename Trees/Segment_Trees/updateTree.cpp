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
    // int a[] = {2, 3, -1, 4};
    int a[] = {-1, 2, 4, -3, 1, 7, 1, 3, 2, -12};
    int n = sizeof(a) / sizeof(a[0]);
    int *tree = new int[(2 * n) + 1];
    int *lazy = new int[(2 * n) + 1];
    // memset(lazy, 0, sizeof(lazy));
    // for (int t=0;t<2 * n;t++)

    buildTreeMinSum(a, tree, 0, n - 1, 1);

    updateMinTreeRange(tree, 0, n - 1, 0, 4, 4, 1);
    cout << minSubArrayQuery(tree, 0, n - 1, 0, 4, 1) << endl;
}