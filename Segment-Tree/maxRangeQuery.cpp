#include "buildTree.hpp"

int maxRangeQuery(int *tree, int st, int ed, int inSt, int inEd, int treeNode) {
    int mid = (st + ed)/2;

    if (inSt <= st && inEd >= ed) {
        return tree[treeNode];
    }
    else if ((inSt >= st && inSt <= ed) || (inEd >= st && inEd <= ed)) {
        return max(maxRangeQuery(tree, st, mid, inSt, inEd, 2 * treeNode),
                (maxRangeQuery(tree, mid+1, ed, inSt, inEd, 2 * treeNode + 1)));
    }
    else
        return INT_MIN;
}

void Update(int *tree, int cI) {
    if (cI == 0)
        return;
    tree[cI] = max(tree[2 * cI], tree[2 * cI + 1]);

    Update(tree, cI/2);
}

int main() {
    int arr[] = {2, 3, 123, 555, 43, 139, -122, 332};
    int n = sizeof(arr)/sizeof(arr[0]);

    int *tree = new int[32];

    buildMaxRangeTree(tree, arr, 0, 7, 1);

    cout << maxRangeQuery(tree, 0, 7, 4, 7, 1);
    tree[n + 7] = 1996;
    int h = (int)(ceil(log2(n)));
    int sz = 2 * (int)pow(2, h) - 1;

    Update(tree, sz-1);
    cout << endl;
    cout << maxRangeQuery(tree, 0, 7, 4, 7, 1);
}
