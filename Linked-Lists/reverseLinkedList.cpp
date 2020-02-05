#include <iostream>
#include "basicActions.h"
using namespace std;

// Function with Return type set to type : " Node * "
Node *reverseLL(Node *head)
{
    // Three Pointers.
    Node *p, *q, *r;
    // 'p' set to head.
    p = head;
    // 'q' set next of p.
    q = p->next;
    // 'r' set next of q.
    r = q->next;

    // Iterating till 'r' is not nullptr.
    while (r != nullptr)
    {
        // Setting next of 'q' to previous node (p).
        q->next = p;
        // Setting Prev Node to Current Node. ('p' to 'q').
        p = q;
        // Setting Current Node to Next Node. ('q' to 'r').
        q = r;
        // Pushing Next Node Forward.
        r = r->next;
    }
    // When out of the loop, still 'q' is not connected to p.. So, we connect them.
    q->next = p;
    // Since the end of the List should be set to nullptr.
    p = head;
    p->next = nullptr;

    // New 'head' is set to q.
    head = q;

    // Then, we return Head Pointer.
    return head;
}

int main()
{
    Node *head = nullptr;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);
    cout << '\n';
    cout << "Before Reversing.." << '\n';
    // Display Linked List.
    displayNodes(head);

    cout << '\n';

    // Calling Driver Function.
    head = reverseLL(head);

    cout << "After Reversing.." << '\n';

    // Display Linked List.
    displayNodes(head);

    cout << '\n';
}
