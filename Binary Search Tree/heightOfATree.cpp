#include <iostream>
#include "basicTreeTemplate.h"
using namespace std;

int heightOfTree(Node *root)
{
    int leftH, rightH;
    if (!root)
        return 0;
    else
    {
        leftH = heightOfTree(root->left);
        rightH = heightOfTree(root->right);

        if (leftH > rightH)
            return leftH + 1;
        else
            return rightH + 1;
    }
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
    cout << heightOfTree(root) << endl;
}
