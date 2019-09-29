#include <math.h>
#include <algorithm>
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *point;
};

void insertAtEnd(Node *&start, int data) {
    Node *temp = new Node();
    Node *p;
    p = start;

    if (!start) {
        Node *temp = new Node();

        temp->next = NULL;
        temp->data = data;
        start = temp;
        return;
    } else {
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = temp;
        temp->data = data;
        temp->next = NULL;
        return;
    }
}

void displayNodes(Node *start) {
    Node *p;
    p = start;

    while (p != NULL) {
        if (p->next != NULL)
            cout << p->data << " -> ";
        else
            cout << p->data;
        p = p->next;
    }
    return;
}

Node *insertAtStart(Node *start, int data) {
    Node *temp = new Node();
    temp = new Node;

    temp->data = data;
    temp->next = start;
    start = temp;
    return start;
}

Node *findMiddle(Node *start) {
    Node *p;
    p = start;
    int count = 0;
    while (p != NULL) {
        p = p->next;
        count++;
    }
    int i = 0;
    p = start;
    while (i != count / 2) {
        p = p->next;
        i++;
    }
    return p;
}

void deleteMiddleElement(Node *start) {
    Node *p, *q;
    p = start;
    int count = 0;
    while (p->next != NULL) {
        p = p->next;
        count++;
    }
    int i = 0;
    p = start;
    while (i != count / 2) {
        q = p;
        p = p->next;
        i++;
    }
    q->next = p->next;
    delete p;
}

void deleteLastElement(Node *start) {
    Node *p, *q;
    p = start;

    while (p->next != NULL) {
        q = p;
        p = p->next;
    }
    delete p;
    q->next = NULL;
    return;
}

Node *deleteFirstElement(Node *start) {
    Node *p;
    p = start->next;
    delete start;
    start = p;
    return start;
}

int getLength(Node *head) {
    Node *p = head;
    int count = 0;
    while (p->next != NULL) {
        count++;
        p = p->next;
    }
    return ++count;
}
