#include <iostream>
using namespace std;

struct Heap
{
    int *heapArr;
    int heapCapacity;
    int currentHeapSize;
};

bool hasParent(int index)
{
    if (index == 0)
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

int getLeftChildIndex(int parentIndex)
{
    return (2 * parentIndex);
}

int getRightChildIndex(int parentIndex)
{
    return ((2 * parentIndex) + 1);
}

void printHeap(Heap *hp)
{
    cout << endl;
    for (int t = 1; t <= (hp->currentHeapSize / 2); t++)
    {
        cout << hp->heapArr[t] << " -> ";
        cout << " Left Child  : ";
        cout << hp->heapArr[2 * t] << '\t';

        cout << " Right Child  : ";
        cout << hp->heapArr[(2 * t) + 1] << '\t';
        cout << endl;
    }
    cout << endl;
    return;
}