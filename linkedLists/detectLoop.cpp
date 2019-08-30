#include <iostream>
#include "unordered_set"
#include "basicActions.h"
using namespace std;

void createLoop(Node *head)
{
    Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = head;
    return;
}

bool detectLoop(Node *head)
{
    unordered_set<Node *> s;
    Node *p = head;

    while (p != NULL)
    {
        if (s.find(p) != s.end())
            return true;

        s.insert(p);
        p = p->next;
    }
    return false;
}

int main()
{
    Node *head = NULL;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);

    createLoop(head);

    detectLoop(head) ? cout << "Loop Detected.." << '\n' : cout << "No Loop Detected.." << '\n';
}
