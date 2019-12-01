#include <iostream>
#include <math.h>
using namespace std;

void buildMinRangeTree(int *tree, int *arr, int st, int end, int treeNode) {
    if (st == end) {
        tree[treeNode] = arr[st];
        return;
    }
    int mid = (st + end) / 2;
    buildMinRangeTree(tree, arr, st, mid, 2 * treeNode);
    buildMinRangeTree(tree, arr, mid+1, end, 2 * treeNode + 1);

    tree[treeNode] = min(tree[2 * treeNode], tree[2 * treeNode + 1]);
}

void buildMaxRangeTree(int *tree, int *arr, int st, int end, int treeNode) {
    if (st == end) {
        tree[treeNode] = arr[st];
        return;
    }
    int mid = (st + end)/2;

    buildMaxRangeTree(tree, arr, st, mid, 2 * treeNode);
    buildMaxRangeTree(tree, arr, mid+1, end, 2 * treeNode + 1);

    tree[treeNode] = max(tree[2 * treeNode], tree[2 * treeNode + 1]);
}
