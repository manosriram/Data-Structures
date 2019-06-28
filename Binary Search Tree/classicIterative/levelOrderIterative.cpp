#include <iostream>
#include <queue>
#include "../basicTreeTemplate.h"
using namespace std;
queue<Node *> q;

void levelOrderIterative(Node *root)
{
    q.push(root);
    Node *node;
    while (!q.empty())
    {
        node = q.front();
        cout << node->data << " ";
        q.pop();

        if (node->left)
            q.push(node->left);

        if (node->right)
            q.push(node->right);
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

    levelOrderIterative(root);
}