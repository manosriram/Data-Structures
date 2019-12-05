#include <iostream>
#include <math.h>
using namespace std;

void printTree(long long int *tree, long long int n) {
    for (long long int t=1;t<2*n;t++)
        cout << tree[t] << " ";

    return;
}
void buildTree(long long int *tree, long long int a[], long long int st, long long int ed, long long int treeNode, long long int lvl) {
    if (st == ed) {
        tree[treeNode] = a[st];
        return;
    }

    long long int mid = (st + ed)/2;
    buildTree(tree, a, st, mid, 2 * treeNode, lvl+1);
    buildTree(tree, a, mid+1, ed, 2 * treeNode + 1, lvl+1);

    if (lvl % 2 != 0)
        tree[treeNode] = tree[2 * treeNode] | tree[2 * treeNode + 1];
    else
        tree[treeNode] = tree[2 * treeNode] ^ tree[2 * treeNode + 1];
}

void rangeUpdate(long long int *tree, long long int treeNode, long long int lvl) {
    if (treeNode == 0)
        return;

    if (lvl % 2 == 0)
        tree[treeNode] = tree[2 * treeNode] | tree[2 * treeNode + 1];
    else
        tree[treeNode] = tree[2 * treeNode] ^ tree[2 * treeNode + 1];

    rangeUpdate(tree, treeNode/2, lvl+1);
}

int main() {
    // freopen("in.txt", "r", stdin);
    long long int n, q;
    cin >> n >> q;
    n = pow(2, n);
    long long int a[n];
    for (long long int t=0;t<n;t++)
        cin >> a[t];

    long long int *tree = new long long int[(2 * n)+1];

    buildTree(tree, a, 0, n-1, 1, 0);

    long long int p, b;
    while (q--) {
        cin >> p >> b;
        --p;
        long long int tar = p;
        tar += n;
        tree[tar] = b;

        rangeUpdate(tree, tar/2, 0);

        cout << tree[1] << '\n';
    }
}
