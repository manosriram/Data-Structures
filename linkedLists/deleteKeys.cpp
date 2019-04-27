#include <iostream>
#include "basicActions.h"
using namespace std;

Node *deleteKeys(Node *head, int x)
{
    Node *p = head, *q = NULL;

    while (p != NULL)
    {
        if (p->next == NULL && p->data == x)
        {
            deleteLastElement(head);
            break;
        }
        else if (p == head && p->data == x)
        {
            head = deleteFirstElement(head);
            p = head;
            q = NULL;
            continue;
        }
        else if (p->data == x)
        {
            q->next = p->next;
            delete p;
            p = q->next;
            continue;
        }
        q = p;
        p = p->next;
        continue;
    }
    return head;
}

int main()
{
    Node *head = NULL;
    insertAtEnd(head, 4);
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);
    insertAtEnd(head, 4);
    head = deleteKeys(head, 3);
    displayNodes(head);
}