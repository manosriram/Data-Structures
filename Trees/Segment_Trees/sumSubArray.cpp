#include <iostream>
#include "BaseFile.h"
using namespace std;

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(NULL);

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *tree = new int[19]; // (2*n) + 1

    buildTree(a, tree, 0, 4, 1);

    for (int t = 0; t < 18; t++)
        cout << tree[t] << " ";

    cout << endl;
}