#include <iostream>
#include "basicActions.h"
using namespace std;

// Driver Function.
Node *findDifference(Node *head1, Node *head2)
{
    // Setting two Temporary "Node" Pointers to traverse the lists..
    Node *p = head1, *q = head2, *head;

    // Allocation of Memory for new Node.
    Node *temp = new Node();
    
    // Setting Node's Data .
    temp->data = (p->data) - (q->data);
    temp->next = NULL;

    // Pushing the pointers 'p' and 'q' forward traversing the lists.
    p = p->next;
    q = q->next;
    
    // Setting the head Pointer.
    head = temp;

    // Traversing Both the lists at the same time.
    while (p != NULL && q != NULL)
    {
        // Insert the difference of the data elements of two lists at the end.
        insertAtEnd(head, (p->data - q->data));

        // Pushing the pointers forward.
        p = p->next;
        q = q->next;
    }
    // returning the head of the Newly made List.
    return head;
}

int main()
{
    // Three Heads for three Linked Lists.
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *head = NULL;
    // Creation and Insertion of First List Data Elements.
    insertAtEnd(head1, 6);
    insertAtEnd(head1, 5);
    insertAtEnd(head1, 3);
    insertAtEnd(head1, 0);
    // Creating and Insertion of Second List Data Elements.
    insertAtEnd(head2, 4);
    insertAtEnd(head2, 5);
    insertAtEnd(head2, 2);
    insertAtEnd(head2, 0);

    // Calling the Driver Function.
    head = findDifference(head1, head2);
    
    displayNodes(head);

}