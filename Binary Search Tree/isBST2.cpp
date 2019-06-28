#include <iostream>
#include "basicTreeTemplate.h"
using namespace std;

bool isBST(Node *root, int min, int max)
{
    if (!root)
        return true;

    if (root->data <= min || root->data > max)
        return false;

    bool left = isBST(root->left, min, root->data);
    bool right = isBST(root->right, root->data, max);

    return (left && right) ? true : false;
}

int main()
{
    Node *root = NULL;

    insertNode(root, 50);
    insertNode(root, 60);
    insertNode(root, 55);
    insertNode(root, 80);
    insertNode(root, 95);
    insertNode(root, 40);
    insertNode(root, 6);
    insertNode(root, 2);
    insertNode(root, 7);
    insertNode(root, 8);

    cout << isBST(root, INT_MIN, INT_MAX) << endl;
}