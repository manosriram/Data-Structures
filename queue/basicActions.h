#include <iostream>
#define max 100
using namespace std;

int front = -1;
int rear = -1;
int *queue = new int[max];

void enQueue(int data) {
    if (front == -1)
        front = 0;
    rear++;
    queue[rear] = data;
}

void deQueue() {
    front++;
}

int getFront() {
    return queue[front];
}

bool isEmpty() {
    return (front == rear+1) ? true : false;
}

void display() {
    for (int t = front; t <= rear; t++)
        cout << queue[t] << " -> ";

    cout << '\n';
}
