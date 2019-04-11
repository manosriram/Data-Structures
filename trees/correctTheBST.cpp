#include <iostream>
#include "basicTreeTemplate.h"
using namespace std;

Node *temp1 = NULL, *temp2 = NULL;
bool correctBST(Node *root, int min, int max)
{
    if (!root)
        return false;

    if (root->data <= min || root->data > max)
    {
        if (temp1 != NULL)
            temp2 = root;
        else
            temp1 = root;

        if (temp1 != NULL && temp2 != NULL)
        {
            Node *t = temp1;
            temp1 = temp2;
            temp2 = t;
        }
        return true;
    }
    return correctBST(root->left, min, root->data) && correctBST(root->right, root->data, max);
}

int main()
{
    Node *root = NULL;
    insertNode(root, 10);
    insertNode(root, 5);
    insertNode(root, 8);
    insertNode(root, 2);
    insertNode(root, 20);
    correctBST(root, INT_MIN, INT_MAX);
    displayTree(root);
}