#include <iostream>
#include "basicTreeTemplate.h"
using namespace std;

int deepestNode(Node *root, int i)
{
    static int depthNode, cnt = INT_MIN;
    if (!root)
    {
        i--;
        return 0;
    }

    deepestNode(root->left, i + 1);
    if (i > cnt)
    {
        cnt = i;
        depthNode = root->data;
        cout << depthNode << " ";
    }
    deepestNode(root->right, i + 1);

    return depthNode;
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
    cout << deepestNode(root, 0) << endl;
}