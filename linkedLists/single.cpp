#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *createNode(struct node *start, int data)
{
    struct node *temp;
    temp = new node;

    temp->next = NULL;
    temp->data = data;
    start = temp;
    return start;
}

void *insertNodeAtEnd(struct node *start, int data)
{
    struct node *temp;
    temp = new node;
    node *p;
    p = start;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = temp;
    temp->data = data;
    temp->next = NULL;
}

void displayNodes(struct node *start)
{
    node *p;
    p = start;

    while (p->next != NULL)
    {
        cout << p->data << " -> ";
        p = p->next;
    }
    cout << p->data << endl;
}

struct node *insertAtStart(struct node *start, int data)
{
    struct node *temp;

    temp = new node;

    temp->data = data;
    temp->next = start;
    start = temp;
    return start;
}

int main()
{
    node *start;
    start = NULL;

    start = createNode(start, 9);
    insertNodeAtEnd(start, 91);
    insertNodeAtEnd(start, 41);
    insertNodeAtEnd(start, 67);
    start = insertAtStart(start, 3412);
    displayNodes(start);
}