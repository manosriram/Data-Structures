#include <iostream>
#include "basicTreeTemplate.h"

int *left, *right;
Node *getMirror(Node *root)
{
    Node *temp;
    if (!root)
        return 0;
    else
    {
        temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
    return root;
}

int main() {
    Node *root = NULL;
    insertNode(root, 50);
    insertNode(root, 60);
    insertNode(root, 70);
    insertNode(root, 80);
    insertNode(root, 90);
    insertNode(root, 55);
    insertNode(root, 10);
    insertNode(root, 5);
    insertNode(root, 40);

    cout << getMirror(root) << endl;
}