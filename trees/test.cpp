#include <iostream>
#include "basicTreeTemplate.h"
using namespace std;

int main()
{
    Node *root = NULL;
    insertNode(root, 1);
    insertNode(root, 2);
    insertNode(root, 3);
    insertNode(root, 4);
    insertNode(root, 5);
    insertNode(root, 6);
    insertNode(root, 7);
    insertNode(root, 8);
    insertNode(root, 9);

    inorderIterative(root);
}