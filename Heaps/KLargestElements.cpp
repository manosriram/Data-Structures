#include <iostream>
#include "MaxHeap.h"
using namespace std;

void printKLargest(Heap *heap, int k) {
    int n = heap->currentHeapSize;
    buildHeap(heap, n);
    for (int t = 0;t<k;t++) {
        cout << extractMax(heap) << " ";
    }
    cout << endl;
    return;
}

int main() {
    Heap *heap = initHeap();
    int k;
    k = 3;

    insert(heap, 1);
    insert(heap, 23);
    insert(heap, 12);
    insert(heap, 9);
    insert(heap, 30);
    insert(heap, 2);
    insert(heap, 50);
    insert(heap, 100);

    printKLargest(heap, k);
}