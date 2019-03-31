#include <iostream>
#include "basicTreeTemplate.h"
using namespace std;

static int col;
static int ind;
int verticalSum(Node *root, int col, int hash[], int store[])
{
    if (!root)
        return 0;

    verticalSum(root->left, col - 1, hash, store);
    hash[col] += root->data;
    store[ind] = col;
    ind++;
    verticalSum(root->right, col + 1, hash, store);
}

int main() {
    int *hash = new int[30];
    int *store = new int[30];
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

    // cout << verticalSum(root,col,hash,store) << endl;
}