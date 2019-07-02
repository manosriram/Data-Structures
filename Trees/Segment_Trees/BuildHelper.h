#include <iostream>
using namespace std;

// O (logn)
void updateTreeRangeLazy(int *tree, int *lazy, int start, int end, int low, int high, int treeNode)
{
    if (low > high)
        return;
}

// O (n)
void updateMinTreeRange(int *tree, int start, int end, int low, int high, int diff, int treeNode)
{
    if (low > high)
        return;

    if (low == high)
    {
        tree[treeNode] = diff;
        return;
    }

    int mid = (low + high) / 2;
    updateMinTreeRange(tree, start, end, low, mid, diff, 2 * treeNode);
    updateMinTreeRange(tree, start, end, mid + 1, high, diff, 2 * treeNode + 1);
    tree[treeNode] = min(tree[2 * treeNode], tree[(2 * treeNode) + 1]);
}

// O (n)
void updateSubSumTree(int *tree, int start, int end, int low, int high, int diff, int treeNode)
{
    if (low > high || start > high || end < low)
        return;

    if (low == high)
    {
        tree[treeNode] += diff;
        return;
    }

    int mid = (low + high) / 2;
    updateSubSumTree(tree, start, end, low, mid, diff, 2 * treeNode);
    updateSubSumTree(tree, start, end, low + 1, high, diff, (2 * treeNode) + 1);
    tree[treeNode] = tree[2 * treeNode] + tree[(2 * treeNode) + 1];
}

// O (logn)
int minSubArrayQuery(int *tree, int start, int end, int qlow, int qhigh, int treeNode)
{
    // Total Overlap
    if (qlow <= start && qhigh >= end)
    {
        return tree[treeNode];
    }

    // No Overlap
    if (qlow > end || qhigh < start)
        return INT_MAX;

    int mid = (start + end) / 2;

    return min(minSubArrayQuery(tree, start, mid, qlow, qhigh, (2 * treeNode)), minSubArrayQuery(tree, mid + 1, end, qlow, qhigh, (2 * treeNode) + 1));
}

// O (logn)
int sumSubArrayQuery(int *tree, int start, int end, int low, int high, int treeNode)
{
    if (low <= start && high >= end)
        return tree[treeNode];

    if (low > end || high < start)
        return 0;

    int mid = (start + end) / 2;
    return sumSubArrayQuery(tree, start, mid, low, high, (2 * treeNode)) + sumSubArrayQuery(tree, mid + 1, end, low, high, (2 * treeNode) + 1);
}
