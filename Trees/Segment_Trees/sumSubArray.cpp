#include <iostream>
#include "BaseFile.h"
using namespace std;

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(NULL);

    int a[] = {10, -8, 12, 3, 32, 2, -12, 0, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int *tree = new int[(2 * n) + 1];

    minSubArray(a, tree, 0, 4, 1);

    cout << tree[1] << endl;
}