#include <iostream>
#include "basicTreeTemplate.h"
using namespace std;

void nodesAtDistanceK(Node *root, int K)
{
    static int level;

    if (!root)
        return;

    if (level > K)
        return;

    if (K == level)
        cout << root->data << " ";

    level++;
    nodesAtDistanceK(root->left, K);
    nodesAtDistanceK(root->right, K);
    level--;
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
    insertNode(root, 2);
    insertNode(root, 7);
    insertNode(root, 8);

    nodesAtDistanceK(root, 2);
    cout << '\n';
}