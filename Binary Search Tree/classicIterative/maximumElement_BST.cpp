#include <iostream>
#include <vector>
#include <stack>
#include "../basicTreeTemplate.h"
using namespace std;

int maximumElement(Node *root)
{
    Node *prev;
    while (root)
    {
        prev = root;
        root = root->right;
    }
    return prev->data;
}

int main()
{
    Node *root = NULL;

    insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 120);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);
    insertNode(root, 100);

    cout << maximumElement(root) << endl;
}