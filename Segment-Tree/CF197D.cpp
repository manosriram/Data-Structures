#include <iostream>
#include <math.h>
using namespace std;

void buildTree(int *tree, int a[], int st, int ed, int treeNode) {
    if (st == ed) {
        tree[treeNode] = a[st];
        return;
    }

    int mid = (st + ed) / 2;
    buildTree(tree, a, st, mid, 2 * treeNode);
    buildTree(tree, a, mid+1, ed, 2 * treeNode + 1);

    if (!(treeNode & 1))
        tree[treeNode] = tree[2 * treeNode] | tree[2 * treeNode + 1];
    else
        tree[treeNode] = tree[2 * treeNode] ^ tree[2 * treeNode + 1];
    cout << treeNode << " " << tree[treeNode] << " ";
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a)/sizeof(a[0]);

    int *tree = new int[(2 * n) + 1];

    buildTree(tree, a, 0, n-1, 1);

    return 1;
    for (int t=1;t<2*n;t++)
        cout << tree[t] << " ";
}

