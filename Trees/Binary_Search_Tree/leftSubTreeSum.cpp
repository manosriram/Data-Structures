#include <iostream>
#include "basicTreeTemplate.h"
using namespace std;

int leftTreeSum(Node *root)
{
    static int sum;

    if (!root)
        return 0;

    leftTreeSum(root->left);
    sum += root->data;
    leftTreeSum(root->right);

    return sum;
}

int main()
{
    Node *root = NULL;
    insertNode(root, 50);
    insertNode(root, 40);
    insertNode(root, 6);
    insertNode(root, 2);
    insertNode(root, 7);
    insertNode(root, 8);
    insertNode(root, 60);
    insertNode(root, 55);
    insertNode(root, 80);
    insertNode(root, 95);

    cout << leftTreeSum(root->left) << endl;
}