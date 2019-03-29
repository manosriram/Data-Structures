#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *insertNode(Node *&root, int data)
{
    if (!root)
    {
        Node *temp = new Node();
        temp->data = data;
        temp->left = temp->right = NULL;
        root = temp;
        return root;
    }
    else if (data > root->data)
    {
        insertNode(root->right, data);
    }
    else
    {
        insertNode(root->left, data);
    }
    return root;
}

void displayTree(Node *root)
{
    if (root)
    {
        cout << root->data << " ";
        displayTree(root->left);
        displayTree(root->right);
    }
}

int main()
{
    Node *root = NULL;
    insertNode(root, 5);
    insertNode(root, 1);
    insertNode(root, 2);
    // displayTree(root);
}