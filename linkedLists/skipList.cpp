#include <iostream>
#include "basicActions.h"
using namespace std;

Node *buildExpressWay(Node *head)
{
    Node *p = head;
    Node *temp = head;
    int n = 4, counter = 0;
    int n1 = n;
    for (int t = 0; t < n; t++)
    {
        temp->express[t] = p;
        p = p->next;
        cout << p->data << " ";
    }
    // cout << temp->express[0]->data << endl;
}

int main()
{
    Node *head = NULL;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 22);
    insertAtEnd(head, 23);
    insertAtEnd(head, 27);
    insertAtEnd(head, 30);
    insertAtEnd(head, 43);
    insertAtEnd(head, 45);
    insertAtEnd(head, 50);
    insertAtEnd(head, 54);
    insertAtEnd(head, 57);
    insertAtEnd(head, 58);
    insertAtEnd(head, 62);
    insertAtEnd(head, 65);
    insertAtEnd(head, 67);

    buildExpressWay(head);
}