#include <iostream>
using namespace std;

struct Heap
{
    int *heapArr;
    int heapCapacity;
    int currentHeapSize;
    int shrunkenSize;
};

bool hasParent(int index)
{
    if (index <= 0)
        return false;

    return true;
}

void ensureExtraCapacity(Heap *hp)
{
    if (hp->currentHeapSize >= hp->heapCapacity)
    {
        hp->heapCapacity = 2 * hp->heapCapacity;
    }
    return;
}

int getParentIndex(int childIndex)
{
    return (childIndex / 2);
}

int getLeftChildIndex(Heap *hp, int i)
{
    int left = 2 * i;
    if (left >= hp->currentHeapSize)
        return -1;

    return left;
}

int getRightChildIndex(Heap *hp, int i)
{
    int left = (2 * i) + 1;
    if (left >= hp->currentHeapSize)
        return -1;

    return left;
}

bool hasLeftChild(Heap *hp, int index)
{
    if (index > hp->currentHeapSize || index <= 0)
        return false;

    return (hp->heapArr[2 * index] == INT_MAX) ? false : true;
}

bool hasRightChild(Heap *hp, int index)
{
    if (index > hp->currentHeapSize || index <= 0)
        return false;

    return (hp->heapArr[(2 * index) + 1] == INT_MAX) ? false : true;
}

void printHeap(Heap *hp)
{
    cout << endl;
    for (int t = 1; t < (hp->currentHeapSize / 2) + 1; t++)
    {
        cout << hp->heapArr[t] << " -> ";
        cout << " Left Child  : ";
        cout << hp->heapArr[(2 * t)] << '\t';

        cout << " Right Child  : ";
        cout << hp->heapArr[(2 * t) + 1] << '\t';
        cout << endl;
    }
    cout << endl;
    return;
}

void printHeapAsArray(Heap *hp)
{
    for (int t = 1; t <= hp->currentHeapSize + hp->shrunkenSize + 1; t++)
        cout << hp->heapArr[t] << " ";

    cout << endl;
    return;
}