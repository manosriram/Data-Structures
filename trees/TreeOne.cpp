#include <iostream>
#include "basicTreeTemplate.h"
using namespace std;

int *queue = new int[40];
int findPath(Node *root)
{
    if (!root)
        return 0;

    queue[ind] = root->data;
    ind++;

    if (!root->left && !root->right)
    {
        for (int t = 0; t < ind; t++)
            cout << queue[t] << " -> ";

        cout << endl;
    }
    findPath(root->left);
    findPath(root->right);
    ind--;
}


int main()
{
    int *store = new int[20];
    int *hash = new int[20];
    Node *root = NULL;
    insertNode(root, 10);
    insertNode(root, 5);
    insertNode(root, 3);
    insertNode(root, 8);
    insertNode(root, 20);
    insertNode(root, 15);
    insertNode(root, 30);

    root = getMirror(root);
    displayTree(root);
}