#include <iostream>
#include "basicActions.h"
using namespace std;

Node *track;

Node *getTarget(Node *target, int k)
{
    Node *temp = target;
    while (k--)
    {
        track = temp;
        temp = temp->next;
    }
    return temp;
}

Node *reverseKPairs(Node *head, int k)
{
    Node *p, *q, *r, *temp, *ptr;
    p = head;
    q = p->next;
    r = q->next;

    static bool first = false;
    static int cnt = k;
    while (1)
    {
        if (ptr->next == NULL)
        {
            p->next = r;
            break;
        }
        cnt = k;
        displayNodes(head);
        while (cnt > 1)
        {
            ptr = getTarget(q, k);
            q->next = p;
            p = q;
            q = ptr;
            r = r->next;
            cnt--;

            if (ptr->next == NULL)
            {
                p->next = r;
                break;
            }
        }
        p->next = ptr;
        q = ptr;
        p = track;
        r = q->next;
        if (!first)
        {
            head = p;
            first = true;
        }
    }
    return head;
}

int main()
{
    Node *head = NULL;
    createNode(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);
    insertAtEnd(head, 6);
    insertAtEnd(head, 7);
    insertAtEnd(head, 8);
    insertAtEnd(head, 9);

    head = reverseKPairs(head, 3);
}