#include <iostream>
#include "basicTreeTemplate.h"
using namespace std;

void printRightBoundary(BNode *root)
{
    if (!root || (!root->left && !root->right))
        return;

    printRightBoundary(root->right);
    cout << root->data << " ";
}

void printLeaves(BNode *root)
{
    if (!root)
        return;

    printLeaves(root->left);

    if (!root->left && !root->right)
        cout << root->data << " ";

    printLeaves(root->right);
}

void printLeftBoundary(BNode *root)
{
    if (!root || (!root->left && !root->right))
        return;

    cout << root->data << " ";
    printLeftBoundary(root->left);
}

void boundaryTrav(BNode *root)
{
    printLeftBoundary(root);
    printLeaves(root);
    printRightBoundary(root->right);
}

int main()
{
    BNode *root = createNode(20);
    root->left = createNode(8);
    root->left->left = createNode(4);
    root->left->right = createNode(12);
    root->left->right->left = createNode(10);
    root->left->right->right = createNode(14);
    root->right = createNode(22);
    root->right->right = createNode(25);

    boundaryTrav(root);
}