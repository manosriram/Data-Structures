#include <iostream>
#include "basicHeapTemplate.h"
using namespace std;

void Heapify(Heap *hp, int in)
{
    int largest = in;
    int left = 2 * in;
    int right = (2 * in) + 1;

    if (left <= hp->currentHeapSize && hp->heapArr[left] > hp->heapArr[in])
        largest = left;

    if (right <= hp->currentHeapSize && hp->heapArr[right] > hp->heapArr[in])
        largest = right;

    if (largest != in)
    {
        swap(hp->heapArr[largest], hp->heapArr[in]);
        Heapify(hp, largest);
    }
}

void MAX_heapifyUp(Heap *&hp)
{
    int index = hp->currentHeapSize - 1;
    cout << hp->heapArr[index] << endl;
    while (hasParent(index) && (hp->heapArr[index] > hp->heapArr[getParentIndex(index)]))
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
    ++hp->currentHeapSize;

    return;
}

int main()
{
    Heap *hp = new Heap();

    hp->heapCapacity = 64;
    hp->currentHeapSize = 1;
    hp->shrunkenSize = 0;
    hp->heapArr = new int[hp->heapCapacity];

    insertKey(hp, 60);
    insertKey(hp, 50);
    insertKey(hp, 30);
    insertKey(hp, 40);
    insertKey(hp, 25);
    insertKey(hp, 20);
    insertKey(hp, 90);

    int n = hp->currentHeapSize;
    for (int t = n;t>=1;t--) {
        Heapify(hp, t);
    }

    printHeapAsArray(hp);
}