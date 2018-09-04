#include <iostream>
#include <stdlib.h>
#define max 10
using namespace std;

int front=-1,rear=-1;
int queue[40];

void insertEl(int d) {
    if (rear == max+1)
    cout << "Queue Overflow..." << '\n';

    else {
        if (front==-1)
        front=0;

        rear++;
        queue[rear]=d;
    }
}

void removeEl() {
    if (front == -1 || front == rear+1)
    cout << "Queue Underflow.." << '\n';

    else {
        int i;
        i = queue[front];
        front++;
    }
}

void display() {

    int i=front;
    while(i <= rear) {
        cout << queue[i] << " ";
        i++;
    }
}

int main() {
    int ch,d;

    while(1) {
        cout << '\n';
        cout << "1. Insert 2.Remove 3.Display 4.Exit" << '\n';
        cin >> ch;

        switch(ch) {
            case 1:
            cin >> d;
            insertEl(d);
            cout << '\n';
            break;

            case 2:
            removeEl();
            break;

            case 3:
            display();
            break;

            case 4:
            exit(0);

            default:
            cout << "Incorrect Selection..." << endl;
        }
    }
}