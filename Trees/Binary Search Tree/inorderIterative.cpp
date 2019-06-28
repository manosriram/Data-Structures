#include <iostream>
#include "basicTreeTemplate.h"
using namespace std;

void inorderIterative(Node *root)
{
    Node *p = root;
    stack<Node *> q;

    while (1)
    {
        while (root)
        {
            q.push(root);
            root = root->left;
        }
        if (q.empty())
            break;

        root = q.top();
        cout << root->data << " ";
        q.pop();
        root = root->right;
    }
}

int main()
{
    Node *root = NULL;

    insertNode(root, 1);
    insertNode(root, 2);
    insertNode(root, 3);
    insertNode(root, 4);
    insertNode(root, 5);
    insertNode(root, 6);

    inorderIterative(root);
}