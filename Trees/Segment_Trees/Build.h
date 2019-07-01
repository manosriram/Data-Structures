#include <iostream>
using namespace std;

void printTree(int *tree, int n)
{
    for (int t = 0; t < 2 * n; t++)
        cout << tree[t] << " ";

    cout << endl;
}

int getMid(int low, int high)
{
    return (low + high) / 2;
}

void buildTreeMinSum(int *a, int *tree, int start, int end, int treeNode)
{
    if (start == end)
    {
        tree[treeNode] = a[start];
        return;
    }

    int mid = (start + end) / 2;

    buildTreeMinSum(a, tree, start, mid, 2 * treeNode);
    buildTreeMinSum(a, tree, mid + 1, end, (2 * treeNode) + 1);

    tree[treeNode] = min(tree[2 * treeNode], tree[(2 * treeNode) + 1]);
    return;
}

void buildTreeSubSum(int *a, int *tree, int start, int end, int treeNode)
{
    if (start == end)
    {
        tree[treeNode] = a[start];
        return;
    }

    int mid = getMid(start, end);

    buildTreeSubSum(a, tree, start, mid, (2 * treeNode));
    buildTreeSubSum(a, tree, mid + 1, end, (2 * treeNode) + 1);

    tree[treeNode] = tree[2 * treeNode] + tree[(2 * treeNode) + 1];
    return;
}