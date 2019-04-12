#include <iostream>
#include "basicActions.h"
using namespace std;

Node *oddEven(Node *head)
{
    Node *head1 = NULL, *head2 = NULL, *p = head;

    while (p != NULL)
    {
        if (p->data % 2 == 0)
        {
            insertAtEnd(head1, p->data);
        }
        else
        {
            insertAtEnd(head2, p->data);
        }
        p = p->next;
    }
    p = head1;

    while (p->next != NULL) {
      p = p->next;
    }
    
    p->next = head2;
    
    
    return head1;
}

int main()
{
    Node *head = NULL;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);
    insertAtEnd(head, 6);
    insertAtEnd(head, 7);
    insertAtEnd(head, 8);

    head = oddEven(head);
    displayNodes(head);
}
