#include <iostream>
#include "basicTreeTemplate.h"
#define max 50
using namespace std;

int *store = new int[max];
static int level;
static int even, odd;

int oddEvenDifference(Node *root)
{
    if (!root)
        return 0;

    if (level % 2 == 0) even += root->data;
    else odd += root->data;

    store[level] += root->data;
    level++;
    oddEvenDifference(root->left);
    oddEvenDifference(root->right);
    level--;
    return 0;
}

int main()
{
    Node *root = NULL;

    for (int t=0;t<max;t++) store[t] = 0;

    insertNode(root, 50);
    insertNode(root, 60);
    insertNode(root, 40);
    insertNode(root, 30);
    insertNode(root, 45);
    insertNode(root, 55);
    insertNode(root, 65);

    oddEvenDifference(root);

    cout << (odd - even) << '\n';
}