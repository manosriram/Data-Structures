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

int findMiddle(struct node *start)
{
    node *p;
    p = start;
    int count = 0;
    while (p->next != NULL)
    {
        p = p->next;
        count++;
    }
    int i = 0;
    p = start;
    while (i != count / 2)
    {
        p = p->next;
        i++;
    }
    return p->data;
}

void deleteMiddleElement(struct node *start)
{
    node *p, *q;
    p = start;
    int count = 0;
    while (p->next != NULL)
    {
        p = p->next;
        count++;
    }
    int i = 0;
    p = start;
    while (i != count / 2)
    {
        q = p;
        p = p->next;
        i++;
    }
    q->next = p->next;
    delete p;
}

void deleteLastElement(struct node *start)
{
    node *p, *q;
    p = start;

    while (p->next != NULL)
    {
        q = p;
        p = p->next;
    }
    delete p;
    q->next = NULL;
    cout << "Last Element Deleted!!" << endl;
    return;
}

struct node *deleteFirstElement(struct node *start)
{
    node *p;
    p = start->next;
    delete start;
    start = p;
    cout << "First Element Deleted!!" << endl;
    return start;
}

void createLoop(struct node *start,int n) {
    node *p,*q;
    p=start;
    q=start;
    while(p->next != NULL) {
        p = p->next;
    }
    while (n--) {
        q = q->next;
    }
    p->next = q;
}

int findLoop(struct node *start) {
    node *p,*q;
    int flag=0;
    p = start;
    q = start;
    while (q->next && p && q) {
            p=p->next;
            q = q->next->next;
        if (p == q) {
            flag=1;
            break;
        }
    }
    if (flag) {
        p = start;
        while (p!=q) {
            p = p->next;
            q = q->next;
        }
        return p->data;
    }
    return 0;
    }

struct node *reverseList(struct node *start) {
    node *prv,*nxt,*cur;
    cur = NULL;
    nxt = NULL;

    while (start) {
       nxt = start->next;
       start->next = cur;
       cur = start;
       start = nxt;
    }
    return cur;
}

int main()
{
    node *start;
    start = NULL;

    insertNodeAtEnd(start, 9);
    insertNodeAtEnd(start, 91);
    insertNodeAtEnd(start, 41);
    insertNodeAtEnd(start, 67);
    insertNodeAtEnd(start, 123);
    insertNodeAtEnd(start, 3232);
    start = insertAtStart(start, 3412);
    displayNodes(start);

    cout << endl;
   
    start = reverseList(start);
    cout << endl;
    displayNodes(start);
    cout << endl;
}