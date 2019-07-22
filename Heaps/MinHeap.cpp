#include <iostream>
#include "basicHeapTemplate.h"
using namespace std;

void heapifyUp(Heap *&hp)
{
    int index = hp->currentHeapSize - 1;
    while (hasParent(index) && (hp->heapArr[index] <= hp->heapArr[getParentIndex(index)]))
    {
        swap(hp->heapArr[getParentIndex(index)], hp->heapArr[index]);
        index = getParentIndex(index);
    }
    return;
}

void insertKey(Heap *&hp, int key)
{
    ensureExtraCapacity(hp);
    hp->heapArr[hp->currentHeapSize] = key;
    hp->currentHeapSize++;
    heapifyUp(hp);
    return;
}

int main()
{
    Heap *hp = new Heap();

    hp->heapCapacity = 64;
    hp->currentHeapSize = 1;
    hp->heapArr = new int[hp->currentHeapSize];

    insertKey(hp, 10);
    insertKey(hp, 15);
    insertKey(hp, 20);
    insertKey(hp, 17);
    insertKey(hp, 8);
    printHeap(hp);
}