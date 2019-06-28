#include <iostream>
#include <math.h>
#include "basicTreeTemplate.h"
using namespace std;

static int front = -1, rear = -1;
Node *queue[100];

void enQueue(Node *root)
{
    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = root;
}

Node *deQueue()
{
    Node *temp = queue[front];
    front++;
    return temp;
}

bool isEmpty()
{
    return (front > rear) ? true : false;
}
#include <vector>
void alternateCorners(Node *root)
{
    vector<int> *l;
    l = new vector<int>[100];

    enQueue(root);
    Node *temp;
    int ind = 1, indexed = 0;
    while (!isEmpty())
    {
        if (ind == pow(2, indexed))
        {
            indexed++;
        }

        temp = deQueue();
        l[indexed].push_back(temp->data);
        ind++;

        if (temp->left)
            enQueue(temp->left);
        if (temp->right)
            enQueue(temp->right);
    }
    for (int c = 0; c <= indexed; c++)
    {
        bool flag = false;
        if (c % 2 == 0)
        {
            flag = true;
        }
        for (auto r = l[c].begin(); r != l[c].end(); r++)
        {
            if (flag)
            {
                cout << *r << " ";
                break;
            }
            else
            {
                if (r == l[c].end() - 1)
                {
                    cout << *r << " ";
                    break;
                }
            }
        }
    }
}

int main()
{
    Node *root = NULL;
    insertNode(root, 50);
    insertNode(root, 40);
    insertNode(root, 60);
    insertNode(root, 30);
    insertNode(root, 45);
    insertNode(root, 65);
    insertNode(root, 70);

    alternateCorners(root);
}