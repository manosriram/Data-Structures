#include <iostream>
#include "basicTreeTemplate.h"
using namespace std;

static int max1 = INT_MIN;
Node *maxInPath(Node *root, int a, int b)
{
    if (!root)
        return NULL;

    if (root->data > max1)
        max1 = root->data;

    if (root->data > a && root->data > b)
    {
        return maxInPath(root->left, a, b);
    }
    if (root->data < a && root->data < b)
    {
        return maxInPath(root->right, a, b);
    }
    return root;
}

int main()
{
    Node *root = NULL;

    insertNode(root, 18);
    insertNode(root, 36);
    insertNode(root, 37);
    insertNode(root, 35);
    insertNode(root, 9);
    insertNode(root, 12);
    insertNode(root, 10);
    insertNode(root, 6);
    insertNode(root, 1);
    insertNode(root, 8);

    root = maxInPath(root, 1, 10);
    max1 = INT_MIN;
    root = maxInPath(root->left, root->data, 1);
    root = maxInPath(root->right, root->data, 10);
    cout << max1 << endl;
}