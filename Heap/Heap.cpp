#include <iostream>
using namespace std;

struct Heap
{
    int *array;
    int count;
    int heap_type;
    int capacity;
};

void printHeap(Heap *h) {
    for (int t=0;t<h->count;t++) {
        cout << h->array[t] << " ";
    }
    return;
}

Heap *createHeap(int capacity, int heap_type) {
    Heap *temp = new Heap();

    if (!temp) {
        cout << "Memory Error !" << endl;
        return NULL;
    }

    temp->heap_type = heap_type;
    temp->capacity = capacity;
    temp->count = 0;
    temp->array = (int *)malloc(sizeof(int) * temp->capacity);

    if (!temp->array) {
        cout << "Memory Error !" << endl;
        return NULL;
    }

    return temp;
}

int leftChild(Heap *h, int i) {
    int left = (2 * i) + 1;
    if (left > h->count) return -1;

    return left;
}

int rightChild(Heap *h, int i) {
    int right = (2 * i) + 2;
    if (right > h->count) return -1;

    return right;
}

void insert(Heap *h, int value) {
    if (h->count == h->capacity) return;

    h->count++;
    int i = h->count - 1;

    while (i >= 0 && value > h->array[(i-1)/2]) {
        h->array[i] = h->array[(i-1)/2];
        i = (i-1)/2;
        cout << i << " ";
    }
    h->array[i] = value;
    return;
}

int main()
{
    Heap *h;

    h = createHeap(100,1);
    insert(h, 10);
    insert(h, 5);
    insert(h, 3);
    insert(h, 2);
    insert(h, 4);
    // printHeap(h);
    // Next : 
    // insert(h, 15);
}