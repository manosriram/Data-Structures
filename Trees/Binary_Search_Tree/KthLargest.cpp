#include <iostream>
#include <algorithm>
#include "basicTreeTemplate.h"
using namespace std;
static int top = -1;
Node *a[100];

void push(Node *root)
{
    top++;
    a[top] = root;
}

void pop()
{
    top--;
}

Node *topElement()
{
    return a[top];
}

bool isEmpty()
{
    return (top == -1) ? true : false;
}

void KLargestIterative(Node *root, int k)
{
    int b[100];
    int ind = 0;
    while (1)
    {
        while (root)
        {
            push(root);
            root = root->left;
        }
        if (isEmpty())
            break;

        root = topElement();
        b[ind] = root->data;
        ind++;
        pop();
        root = root->right;
    }
    cout << b[ind - k] << '\n';
}

int main()
{
    Node *root = NULL;
    insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);
    int k;
    cin >> k;

    KLargestIterative(root, k);
}