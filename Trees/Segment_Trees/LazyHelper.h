#include <iostream>
using namespace std;

void updateTreeLazy(int *lazy, int *tree, int start, int end, int delta, int low, int high, int pos) {
    if (low > high) return;

    if (lazy[pos] != 0) {
        tree[pos] += lazy[pos];

        if (low != high) {
            lazy[2 * pos] += lazy[pos];
            lazy[(2* pos) + 1] += lazy[pos];
        }
        lazy[pos] = 0;
    }

    if (start > high || end < low) return;

    if (start <= low && end >= high) {
        tree[pos] += delta;
        if (low != high) {
            lazy[2 * pos] += delta;
            lazy[(2* pos) + 1] += delta;
        }
        return;
    }

    int mid = (start + end) / 2;
    updateTreeLazy(lazy, tree, start, end, delta, low, mid, 2 * pos);
    updateTreeLazy(lazy, tree, start, end, delta, mid+1, high, (2 * pos) + 1);
    tree[pos] = min(tree[2 * pos], tree[(2 * pos) + 1]);
}