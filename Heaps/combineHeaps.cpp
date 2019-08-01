#include <iostream>
#include "MaxHeap.h"
using namespace std;

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

void combineHeaps(Heap *h1, Heap *h2)
{
    int n = h2->currentHeapSize;
    for (int t=1;t<=n;t++)
    {
        insert(h1, h2->heapArr[t]);
    }
    buildHeap(h1, h1->currentHeapSize);
    return;
}

int main()
{
    Heap *h1 = initHeap();
    Heap *h2 = initHeap();

    insert(h1, 50);
    insert(h1, 40);
    insert(h1, 30);
    insert(h1, 20);
    insert(h1, 31);
    insert(h1, 25);

    insert(h2, 100);
    insert(h2, 56);
    insert(h2, 80);
    insert(h2, 4);

    printHeap(h1);
    combineHeaps(h1, h2);
    printHeap(h1);
}