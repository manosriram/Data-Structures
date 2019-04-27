#include <iostream>
#include "basicActions.h"
using namespace std;

/*
Function to Delete Keys.
We can have 3 base cases :

1. If the Key is at the Start of the List, Remove Element at Start.
2. If the Key is at the End of the List, Remove Element at End.
3. If the Key is somewhere in the middle :
    -> Set Prev Node's (q) "next" to Current Node's (p) "next".
    -> Delete Current Node.
    -> Set Current Node to Prev's "next".

*/

Node *deleteKeys(Node *head, int x)
{
    Node *p = head, *q = NULL;

    while (p != NULL)
    {
        // Element Found at Last.
        if (p->next == NULL && p->data == x)
        {
            deleteLastElement(head);
            break;
        }
        // Element Found at Start.
        else if (p == head && p->data == x)
        {
            head = deleteFirstElement(head);
            p = head;
            q = NULL;
            continue;
        }
        // Element Found Somewhere else.
        else if (p->data == x)
        {
            q->next = p->next;
            delete p;
            p = q->next;
            continue;
        }
        // Not Found.
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