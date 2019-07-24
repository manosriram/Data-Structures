#include <iostream>
#include "MaxHeap.h"
using namespace std;

int main()
{
    Heap *hp = new Heap();
    hp->heapCapacity = 64;
    hp->currentHeapSize = hp->shrunkenSize = 0;
    hp->heapArr = new int[hp->heapCapacity];
    setMax(hp);

    insertKey(hp, 30);
    insertKey(hp, 25);
    insertKey(hp, 40);
    // insertKey(hp, 50);
    // insertKey(hp, 20);
    insertKey(hp, 60);
    insertKey(hp, 3);
    insertKey(hp, 4);

    int n = hp->currentHeapSize;
    for (int t = 1; t <= n; t++)
        deleteItem(hp);

    heapifyDown(hp, 1);
    for (int t = 1; t <= n; t++)
        cout << hp->heapArr[t] << " ";

    cout << endl;
}