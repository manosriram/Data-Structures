#include <iostream>
using namespace std;

void updateSubSumTree(int *tree, int start, int end, int index, int value, int treeNode) {

    if (start == end) {
        tree[treeNode] = value;
    } else {
        int mid = (start + end)/ 2;
        
        if (index >= start && index <= mid) updateSubSumTree(tree, start, mid, index, value, 2 * treeNode);

        else updateSubSumTree(tree, mid+1, end, index, value, (2 * treeNode) + 1);

        tree[treeNode] = tree[2 * treeNode] + tree[(2 * treeNode) + 1];
    }
}

int minSubArray(int *tree, int start, int end, int qlow, int qhigh, int treeNode)
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

    return min(minSubArray(tree, start, mid, qlow, qhigh, (2 * treeNode)), minSubArray(tree, mid + 1, end, qlow, qhigh, (2 * treeNode) + 1));
}

int sumSubArray(int *tree, int start, int end, int low, int high, int treeNode)
{
    if (low <= start && high >= end)
        return tree[treeNode];

    if (low > end || high < start)
        return 0;

    int mid = (start + end) / 2;
    return sumSubArray(tree, start, mid, low, high, (2 * treeNode)) + sumSubArray(tree, mid + 1, end, low, high, (2 * treeNode) + 1);
}
