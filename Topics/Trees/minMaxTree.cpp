#include <iostream>
#include "basicTree.h"
using namespace std;

void maxNode(node *root)
{
    node *current = root;

    while (current->right != NULL)
    {
        current = current->right;
    }

    cout << current->data;
}

int main()
{
    node *root = new node();
    insert(root, 50);
    insert(root, 100);
    insert(root, 400000);
    insert(root, 70);
    insert(root, 1023);
    insert(root, 1024);
    maxNode(root);
}