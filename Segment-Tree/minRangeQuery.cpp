#include "buildTree.hpp"

int minRangeQuery(int *tree, int st, int ed, int inSt, int inEd, int treeNode) {
    int mid = (st + ed) / 2;
    if (inSt <= st && inEd >= ed) {
        return tree[treeNode];
    }
    else if ((inSt >= st && inSt <= ed) || (inEd >= st && inEd <= ed)) {
        return min(minRangeQuery(tree, st, mid, inSt, inEd, 2 * treeNode), minRangeQuery(tree, mid+1, ed, inSt, inEd, 2 * treeNode + 1));
    }
    else return INT_MAX;
}

int main() {
    int arr[]= {1, 12, 3, -6, -5, -25};

    int *tree = new int[32];

    buildMinRangeTreee(tree, arr, 0, 5, 1);

    cout << minRangeQuery(tree, 0, 5, 2, 4, 1);

}
