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

int findFullNodes(Node *root)
{
    static int cnt;
    if (!root)
        return 1;

    findFullNodes(root->left);
    if (root->left && root->right)
        cnt++;
    findFullNodes(root->right);
    return cnt;
}

int deepestNode(Node *root, int i)
{
    static int depthNode;
    if (!root)
    {
        i--;
        return 0;
    }

    deepestNode(root->left, i + 1);
    depthNode = root->data;
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
    insertNode(root, 40);
    insertNode(root, 5);

    // displayTree(root);
    // cout << findFullNodes(root) << endl;
    cout << deepestNode(root, 0) << endl;
    // deepestNode(root, 0);
}