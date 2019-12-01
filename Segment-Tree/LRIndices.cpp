#include <iostream>
using namespace std;

void buildTree(int *tree, int a[], int st, int ed, int treeNode) {
    if (st == ed) {
        if (a[st] == 0)
            a[st] = INT_MAX;

        tree[treeNode] = st;
        return;
    }

    int mid = (st + ed)/2;
    buildTree(tree, a, st, mid, 2 * treeNode);
    buildTree(tree, a, mid+1, ed, 2 * treeNode + 1);

    int min_ = (tree[2 * treeNode] < tree[2 * treeNode + 1]) ? (2 * treeNode) : (2 * treeNode + 1);

    if (tree[2 * treeNode] != INT_MAX) {
        tree[treeNode] = min_;
    }
    else if (tree[2 * treeNode + 1] != INT_MAX) {
        tree[treeNode] = min_;
    }
    else
        tree[treeNode] = INT_MAX;
}

int Query(int *tree, int a[], int st, int ed, int inSt, int inEd, int treeNode) {
    int mid = (st + ed)/2;

    if (inSt <= st && inEd >= ed)
        return tree[treeNode];
    else if ((inSt >= st && inSt <= ed) || (inEd >= st && inEd <= ed))
        return min(Query(tree, a, st, mid, inSt, inEd, 2 * treeNode), Query(tree, a, mid+1, ed, inSt, inEd, 2 * treeNode + 1));
    else
        return INT_MAX;
}

int main() {
    int a[] = {1, 0, 0, 0, 1, 0, 1};
    int *tree = new int[15];

    buildTree(tree, a, 0, 6, 1);

    cout << Query(tree, a, 0, 6, 3, 5, 1);
}
