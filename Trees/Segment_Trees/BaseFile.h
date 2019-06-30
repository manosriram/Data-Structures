#include <iostream>
using namespace std;

void buildTree(int *a, int *tree, int start, int end, int treeNode)
{
    if (start == end)
    {
        tree[treeNode] = a[start];
        return;
    }

    int mid = (start + end) / 2;

    buildTree(a, tree, start, mid, 2 * treeNode);
    buildTree(a, tree, mid + 1, end, (2 * treeNode) + 1);

    tree[treeNode] = tree[2 * treeNode] + tree[(2 * treeNode) + 1];
    return;
}
