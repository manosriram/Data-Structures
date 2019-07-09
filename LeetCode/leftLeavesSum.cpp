#include <iostream>
#include "basicTreeTemplate.h"
using namespace std;

int sumLeft(Node *root)
{
    static int sum;
    if (!root)
        return 0;

    if (root->left)
    {
        cout << root->data << " ";
        if (!root->left->left && !root->left->right)
            sum += root->left->data;
    }
    sumLeft(root->left);
    sumLeft(root->right);
    return sum;
}

int main()
{
    Node *root = NULL;
    insertNode(root, 3);
    insertNode(root, 9);
    insertNode(root, 20);
    insertNode(root, 15);
    insertNode(root, 7);

    int s = sumLeft(root);
    cout << s << endl;
}