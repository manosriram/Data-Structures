#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

node *insert(node *root, int value)
{
    if (root == NULL)
    {
        node *temp = new node();
        temp->data = value;
        temp->left = NULL;
        temp->right = NULL;
        root = temp;
        return root;
    }
    else if (root->data > value)
    {
        root->left = insert(root->left, value);
    }
    else
    {
        root->right = insert(root->right, value);
    }
    return root;
}

void inOrder(node *root)
{
    if (root == NULL)
        return;

    inOrder(root->left);
    inOrder(root->right);
    cout << root->data << " ";
}
