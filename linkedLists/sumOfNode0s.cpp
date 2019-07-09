#include <iostream>
#include "basicActions.h"
using namespace std;

Node *sum0s(Node *head)
{
    Node *temp = NULL;
    Node *p = head;
    int sum = 0;
    while (p != NULL)
    {
        if (p->data == 0)
        {
            insertAtEnd(temp, sum);
            sum = 0;
            p = p->next;
            continue;
        }
        sum += p->data;
        p = p->next;
        continue;
    }
    return temp;
}

int main()
{
    Node *head = NULL;

    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 0);
    insertAtEnd(head, 5);
    insertAtEnd(head, 4);
    insertAtEnd(head, 0);
    insertAtEnd(head, 3);
    insertAtEnd(head, 2);
    insertAtEnd(head, 0);

    head = sum0s(head);
    displayNodes(head);
}