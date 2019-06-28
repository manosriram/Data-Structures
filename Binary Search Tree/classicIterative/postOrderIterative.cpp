#include <iostream>
#include <stack>
#include "../basicTreeTemplate.h"
using namespace std;

void postOrderIterative(Node *root)
{
    stack<Node *> s1, s2;

    s1.push(root);
    Node *node;
    while (!s1.empty())
    {
        node = s1.top();
        s2.push(node);
        s1.pop();

        if (node->left)
            s1.push(node->left);

        if (node->right)
            s1.push(node->right);
    }

    while (!s2.empty())
    {
        node = s2.top();
        cout << node->data << " ";
        s2.pop();
    }

    return;
}

int main()
{
    Node *root = NULL;
    insertNode(root, 50);
    insertNode(root, 60);
    insertNode(root, 55);
    insertNode(root, 57);
    insertNode(root, 61);
    insertNode(root, 63);
    insertNode(root, 40);
    insertNode(root, 45);
    insertNode(root, 47);
    insertNode(root, 30);

    postOrderIterative(root);
}