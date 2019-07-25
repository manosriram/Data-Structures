#include <iostream>
using namespace std;

struct Heap
{
    int *heapArr;
    int currentHeapSize;
    int maxHeapSize;
};

void maxHeapify(Heap *hp, int i, int n)
{
    int largest = i;

    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && hp->heapArr[left] > hp->heapArr[largest])
        largest = left;

    if (right <= n && hp->heapArr[right] > hp->heapArr[largest])
        largest = right;

    if (largest != i)
    {
        int temp = hp->heapArr[largest];
        hp->heapArr[largest] = hp->heapArr[i];
        hp->heapArr[i] = hp->heapArr[largest];

        maxHeapify(hp, largest, n);
    }
    return;
}

void buildHeap(Heap *hp, int n)
{
    for (int t = n / 2; t >= 0; t--)
    {
        maxHeapify(hp, t, n);
    }
}

void insertKey(Heap *&hp, int key)
{
    hp->heapArr[++hp->currentHeapSize] = key;
    return;
}

int main()
{
    Heap *hp = new Heap();
    hp->currentHeapSize = 0;
    hp->maxHeapSize = 64;
    hp->heapArr = new int[hp->maxHeapSize];

    buildHeap(hp, hp->currentHeapSize);

    insertKey(hp, 4);
    insertKey(hp,1);
    insertKey(hp, 2);
    insertKey(hp, 90);

    int size = hp->currentHeapSize;
    for (int i = size; i>=2;i--) {
        int temp = hp->heapArr[1];
        hp->heapArr[1] = hp->heapArr[i];
        hp->heapArr[i] = temp;

        --hp->currentHeapSize;
        maxHeapify(hp, i, size);
    }

    for (int t = 1 ;t<size;t++)
        cout << hp->heapArr[t] << " ";


}