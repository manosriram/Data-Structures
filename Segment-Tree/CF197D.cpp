#include <iostream>
#include <math.h>
using namespace std;
static int ht = INT_MIN;

void Update(int *tree, int cI, int level) {
    if (cI == 0)
        return;

    if (level % 2 != 0)
        tree[cI] = tree[2 * cI] | tree[2 * cI + 1];
    else
        tree[cI] = tree[2 * cI] ^ tree[2 * cI + 1];

    Update(tree, cI/2, level-1);
}

void buildTree(int *tree, int a[], int st, int ed, int treeNode, int level) {
    if (st == ed) {
        tree[treeNode] = a[st];
        return;
    }

    int mid = (st + ed) / 2;
    buildTree(tree, a, st, mid, 2 * treeNode, level+1);
    buildTree(tree, a, mid+1, ed, 2 * treeNode + 1, level+1);
    if (level > ht)
        ht = level;
    if (level % 2 == 0)
        tree[treeNode] = tree[2 * treeNode] | tree[2 * treeNode + 1];
    else
        tree[treeNode] = tree[2 * treeNode] ^ tree[2 * treeNode + 1];
}

int main() {
    int n, q;
    cin >> n >> q;
    n = pow(2, n);
    int a[n];
    for (int t=0;t<n;t++)
        cin >> a[t];

    int *tree = new int[(2 * n) + 1];
    buildTree(tree, a, 0, n-1, 1, 0);

    int hght = ht;
    int p, b;
    for (int t=0;t<q;t++) {
        ht = hght;
        cin >> p >> b;
        --p;
        int in = n + p;
        tree[in] = b;
        Update(tree, (in)/2, ht);

        cout << tree[1] << '\n';
    }
}
