#include <iostream>
#include "basicHeapTemplate.h"
using namespace std;

void MIN_heapifyUp(Heap *&hp)
{
    int index = hp->currentHeapSize;
    while (hasParent(index) && (hp->heapArr[index] < hp->heapArr[getParentIndex(index)]))
    {
        swap(hp->heapArr[getParentIndex(index)], hp->heapArr[index]);
        index = getParentIndex(index);
    }
    return;
}

void insertKey(Heap *&hp, int key)
{
    ensureExtraCapacity(hp);
    hp->heapArr[++hp->currentHeapSize] = key;
    MIN_heapifyUp(hp);
    return;
}

int main()
{
    Heap *hp = new Heap();

    hp->heapCapacity = 64;
    hp->currentHeapSize = 0;
    hp->heapArr = new int[hp->currentHeapSize];
    memset(hp->heapArr, INT_MIN, hp->heapCapacity);
    hp->heapArr[0] = INT_MIN;

    insertKey(hp, 5);
    insertKey(hp, 3);
    insertKey(hp, 17);
    insertKey(hp, 10);
    insertKey(hp, 84);
    insertKey(hp, 19);
    insertKey(hp, 6);
    insertKey(hp, 22);
    insertKey(hp, 9);

    printHeap(hp);
}