#include <iostream>
#include "basicHeapTemplate.h"
using namespace std;

void MAX_heapifyUp(Heap *&hp)
{
    int index = hp->currentHeapSize;
    while (hasParent(index) && (hp->heapArr[index] >= hp->heapArr[getParentIndex(index)]))
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

    MAX_heapifyUp(hp);
    return;
}

int main()
{
    Heap *hp = new Heap();

    hp->heapCapacity = 64;
    hp->currentHeapSize = 0;
    hp->heapArr = new int[hp->heapCapacity];
    memset(hp->heapArr, INT_MAX, hp->heapCapacity);
    hp->heapArr[0] = INT_MAX;

    insertKey(hp, 30);
    insertKey(hp, 25);
    insertKey(hp, 40);
    insertKey(hp, 50);
    insertKey(hp, 20);
    insertKey(hp, 60);

    printHeap(hp);
}