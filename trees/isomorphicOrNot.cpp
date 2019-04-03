#include <iostream>
#include "basicTreeTemplate.h"
using namespace std;

bool isIsomorphic(Node *root1, Node *root2)
{
    if (!root1 && !root2)
        return true;

    if ((!root1 && root2) || (root1 && !root2))
        return false;

    return isIsomorphic(root1->left, root2->left) && isIsomorphic(root1->right, root2->right);
}

int main()
{
    Node *root1 = NULL;
    Node *root2 = NULL;

    // Tree 1
    insertNode(root1, 100);
    insertNode(root1, 200);
    insertNode(root1, 3);
    insertNode(root1, 2);
    insertNode(root1, 7);

    // Tree 2
    insertNode(root2, 200);
    insertNode(root2, 300);
    insertNode(root2, 3);
    insertNode(root2, 2);
    insertNode(root2, 7);

    (isIsomorphic(root1, root2)) ? cout << "Are Isomorphic.." << '\n' : cout << "Not Isomorphic" << '\n';
}