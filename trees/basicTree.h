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
    cout << root->data << " ";
    inOrder(root->right);
}

int sum1 = 0, sum2 = 0;
int sumOfNodes(node *root)
{

    if (!root)
        return 0;

    sum1 = sumOfNodes(root->left) + root->data;
    sum2 = sumOfNodes(root->right) + root->data;
    return max(sum1, sum2);
}

void sumofLeaves(node *root, int *sum) {

    if (!root) {
        return;
    }
    if (!root->left && !root->right) {
        *sum += root->data;
    }
    sumofLeaves(root->left,sum);
    sumofLeaves(root->right,sum);
}