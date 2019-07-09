#include <iostream>
#include "basicActions.h"
using namespace std;

Node *sum0(Node *head)
{
    int sum = 0;
    Node *prev = head, *temp = head, *res = head;

    while (temp->next != NULL)
    {
         while (temp->data != 0 && temp->next)
        {
            sum += temp->data;
            temp = temp->next;
        }
        if (temp->next)
        {
            prev->data = sum;
            prev->next = temp->next;
            prev = temp->next;
            temp = prev;
            sum = 0;
        }
    }
    if (temp->data == 0 && !temp->next) {
        prev->data = sum;
        prev->next = temp->next;
        prev = temp->next;
    }
    return res;
}

int main()
{
    Node *head = NULL;

    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 0);
    insertAtEnd(head, 5);
    insertAtEnd(head, 4);
    insertAtEnd(head, 0);
    insertAtEnd(head, 3);
    insertAtEnd(head, 2);
    insertAtEnd(head, 0);
    insertAtEnd(head, 0);
    insertAtEnd(head, 0);
    insertAtEnd(head, 0);
    
    
    head = sum0(head);
    displayNodes(head);
}