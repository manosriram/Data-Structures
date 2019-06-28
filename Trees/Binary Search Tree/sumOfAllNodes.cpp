#include <iostream>
#include "basicTreeTemplate.h"


int sumOfAllNodes(Node *root)
{
    if (!root)
        return 0;

    return (sumOfAllNodes(root->left) + sumOfAllNodes(root->right) + root->data);
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

    cout << sumOfAllNodes(root) << endl;
}