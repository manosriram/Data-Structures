#include <iostream>
#include "basicTreeTemplate.h"
using namespace std;

int findFullNodes(Node *root)
{
    static int cnt;
    // If No node is present, return 1
    if (!root)
        return 1;

    // Go to the left.
    findFullNodes(root->left);

    // If there are two children for a node, then increase the count.
    if (root->left && root->right)
        cnt++;

    // Go to the right.
    findFullNodes(root->right);

    // Return the count.
    return cnt;
}

int main()
{
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

    cout << findFullNodes(root) << "\n";
}