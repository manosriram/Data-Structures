#include <iostream>
#include "basicActions.h"
using namespace std;

Node *swapPairs(Node *head)
{
    // Pointers of type "Node" to traverse through the list.
    Node *p, *q;
    // Temporary variable to swap Node's data.
    int temp;
    // Setting the Pointer 'p' to the head of the list.
    p = head;
    // Setting the Pointer 'q' to the 'next' node to that of 'p'.
    q = p->next;

    // Loop till both pointers have valid Node. (NOT NULL)
    while (p != NULL && q != NULL)
    {
        // Swapping Node's Data.
        temp = p->data;
        p->data = q->data;
        q->data = temp;

        // Pushing Pointer forward.
        p = q->next;
        q = p->next;
    }
    // Returning the head of the List.
    return head;
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

    head = swapPairs(head);

    displayNodes(head);
}