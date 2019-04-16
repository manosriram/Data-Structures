#include <iostream>
#include "basicTreeTemplate.h"
using namespace std;

int countRange(Node *root, int l, int h)
{
    if (!root)
        return 0;

    if (root->data == l && root->data == h)
        return 1;

    if (root->data >= l && root->data <= h)
    {
        return 1 + countRange(root->left, l, h) + countRange(root->right, l, h);
    }

    if (root->data < l)
        return countRange(root->right, l, h);

    else
        return countRange(root->left, l, h);
}

int main()
{
    Node *root = NULL;

    insertNode(root, 50);
    insertNode(root, 40);
    insertNode(root, 30);
    insertNode(root, 25);
    insertNode(root, 35);
    insertNode(root, 45);
    insertNode(root, 60);
    insertNode(root, 55);
    insertNode(root, 70);
    insertNode(root, 65);
    insertNode(root, 80);
    insertNode(root, 75);
    insertNode(root, 90);
    // insertNode(root, 10);
    // insertNode(root, 5);
    // insertNode(root, 50);
    // insertNode(root, 1);
    // insertNode(root, 40);
    // insertNode(root, 100);
    int got = countRange(root, 35, 70);
    cout << got << endl;
    // cout << cnt << '\n';
    // displayTreeInorder(root);
}