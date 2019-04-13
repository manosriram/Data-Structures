#include <iostream>
#include "basicActions.h"
using namespace std;

void deleteWithoutHead(Node *ptr)
{
    *ptr = *ptr->next;
}

int main()
{
    Node *head = NULL;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 4);
    insertAtEnd(head, 30);

    deleteWithoutHead(head->next);
    displayNodes(head);
}