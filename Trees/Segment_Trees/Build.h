#include <iostream>
#include <math.h>
using namespace std;

bool powerL(int n)
{
    double temp = log(n) / log(2);

    return (ceil(temp) - temp == 0) ? true : false;
}

int nextPowerOfTwo(int n)
{
    while (!powerL(n))
    {
        n++;
    }
    return n;
}

void printTree(int *tree, int n)
{
    int size = nextPowerOfTwo(2 * n);
    for (int t = 1; t < size - 1; t++)
        cout << tree[t] << " ";

    cout << endl;
}

int getMid(int low, int high)
{
    return (low + high) / 2;
}

int *buildTree(int *a)
{
    int n = sizeof(a) / sizeof(a[0]);
    int size = nextPowerOfTwo(n);

    int *segmentTree = new int[2 * size + 1];

    for (int t = 1; t < size; t++)
        segmentTree[t] = INT_MAX;

    return segmentTree;
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

void buildMaxSumArray(int a[], int *tree, int start, int end, int treeNode)
{
    if (start == end)
    {
        tree[treeNode] = a[start];
        return;
    }

    int mid = (start + end) / 2;

    buildMaxSumArray(a, tree, start, mid, 2 * treeNode);
    buildMaxSumArray(a, tree, mid + 1, end, 2 * treeNode + 1);
    tree[treeNode] = max(tree[2 * treeNode], tree[2 * treeNode + 1]);
    return;
}

void buildTreeDiff(int a[], int *tree, int st, int ed, int treeNode)
{
    if (st == ed)
    {
        tree[treeNode] = 0;
        return;
    }

    int mid = (st + ed) / 2;
    buildTreeDiff(tree, a, st, mid, 2 * treeNode);
    buildTreeDiff(tree, a, mid + 1, ed, 2 * treeNode + 1);
    tree[treeNode] = 0;
}