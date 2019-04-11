#include <iostream>
#include "basicTreeTemplate.h"
using namespace std;

int leastCommonAncestor(Node *root, int d1, int d2)
{
    if (!root)
        return 0;

    int left = leastCommonAncestor(root->left, d1, d2);

    if (root->data == d1 || root->data == d2)
        return root->data;

    int right = leastCommonAncestor(root->right, d1, d2);

    if (left != 0 && right != 0)
        return root->data;

    if (left == 0 && right == 0)
        return 0;

    if (left != 0)
        return left;
    else
        return right;
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
    insertNode(root, 7);
    insertNode(root, 2);
    insertNode(root, 8);

    cout << "Least Common Ancestor is : " << leastCommonAncestor(root, 2, 8) << endl;
}