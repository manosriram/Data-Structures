#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int GCD(int a, int b)
{
    if (a == 0)
        return b;

    return GCD((b % a), a);
}

int LCM(int a, int b) {
    return (a * b)/GCD(a,b);
}

void BuildTree(int *tree, int a[], int st, int ed, int treeNode) {
    if (st == ed) {
        tree[treeNode] = a[st];
        return;
    }

    int mid = (st + ed) / 2;
    BuildTree(tree, a, st, mid, 2 * treeNode);
    BuildTree(tree, a, mid+1, ed, 2 * treeNode + 1);

    tree[treeNode] = LCM(tree[2 * treeNode], tree[2 * treeNode + 1]);
}

int Query(int *tree, int a[], int st, int ed, int inSt, int inEd, int treeNode) {

    if (ed < inSt || st > inEd) // No Overlap.
        return 1;

    if (inSt <= st && inEd >= ed)
        return tree[treeNode];

    int mid = (st + ed)/2;
    int lf = Query(tree, a, st, mid, inSt, inEd, 2 * treeNode);
    int rt = Query(tree, a, mid+1, ed, inSt, inEd, 2 * treeNode + 1);

    return LCM(lf, rt);
}

int main() {
    int a[] = {5, 7, 5, 2, 10, 12, 11, 17, 14, 1, 44};
    int n = sizeof(a)/sizeof(a[0]);

    int *tree = new int[2 * n + 1];
    BuildTree(tree, a, 0, n-1, 1);

    cout << Query(tree, a, 0, n-1, 5, 10, 1);

}
