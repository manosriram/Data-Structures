#include <iostream>
#include <stack>
#include <queue>
using namespace std;

struct BNode
{
    int data;
    BNode *left;
    BNode *right;
};

BNode *createNode(int data)
{
    BNode *temp = new BNode();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

void insertNode(BNode *root, int data)
{
    queue<BNode *> nq;
    nq.push(root);

    while (!nq.empty()) {
        root = nq.front();
        nq.pop();

        if (!root->left) {
            root->left = createNode(data);
            break;
        } else {
            nq.push(root->left);
        }
        
        if (!root->right) {
            root->right = createNode(data);
            break;
        } else {
            nq.push(root->right);
        }
    }
    return;
}

void inOrderTraversalRecursive(BNode *root) {
    if (!root) return;

    inOrderTraversalRecursive(root->left);
    cout << root->data << " ";
    inOrderTraversalRecursive(root->right);

    return;
}

void preOrderTraversalRecursive(BNode *root) {
    if (!root) return;

    cout << root->data << " ";
    preOrderTraversalRecursive(root->left);
    preOrderTraversalRecursive(root->right);
    return;
}

void postOrderTraversalRecursive(BNode *root) {
    if (!root) return;

    postOrderTraversalRecursive(root->left);
    postOrderTraversalRecursive(root->right);
    cout << root->data << " ";
    return;
}