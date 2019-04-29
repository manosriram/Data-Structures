#include <iostream>
#include <stack>
using namespace std;

struct Node
{
    int data;
    Node *right;
    Node *left;
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

void displayTreePreorder(Node *root)
{
    if (root)
    {
        cout << root->data << " ";
        displayTreePreorder(root->left);
        displayTreePreorder(root->right);
    }
}

void displayTreePostorder(Node *root)
{
    if (root)
    {
        displayTreePostorder(root->left);
        displayTreePostorder(root->right);
        cout << root->data << " ";
    }
}

void displayTreeInorder(Node *root)
{
    if (root)
    {
        displayTreeInorder(root->left);
        cout << root->data << " ";
        displayTreeInorder(root->right);
    }
}

void inorderIterative(Node *root)
{
    Node *p = root;
    stack<Node *> q;

    while (1)
    {
        while (root)
        {
            q.push(root);
            root = root->left;
        }
        if (q.empty())
            break;

        root = q.top();
        cout << root->data << " ";
        q.pop();
        root = root->right;
    }
}