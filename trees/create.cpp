#include <iostream>
using namespace std;

static int col;

// Tree Structure
struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *createNode(int d)
{
    Node *temp = new Node();
    temp->data = d;
    temp->left = temp->right = NULL;
    return temp;
}

Node *insertNode(Node *&root, int data)
{
    if (!root)
        root = createNode(data);
    else if (root->data > data)
        insertNode(root->left, data);
    else
        insertNode(root->right, data);

    return root;
}

void display(Node *root)
{
    if (root)
    {
        cout << root->data << " ";
        display(root->left);
        display(root->right);
    }
}
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

int leafNodes(Node *root)
{
    if (!root)
        return 0;

    if (!root->left && !root->right)
    {
        return 1;
    }
    return leafNodes(root->right) + leafNodes(root->left);
}

int heightOfTree(Node *root)
{
    int leftH, rightH;
    if (!root)
        return 0;
    else
    {
        leftH = heightOfTree(root->left);
        rightH = heightOfTree(root->right);

        if (leftH > rightH)
            return leftH + 1;
        else
            return rightH + 1;
    }
}

int currentSum = 0;
int findPathSum(Node *root, int sum)
{
    if (!root)
        return 0;

    currentSum += root->data;
    cout << currentSum << '\n';
    if (!root->left && !root->right && currentSum == sum)
        return 1;

    if (!root->left && !root->right && currentSum != sum)
    {
        currentSum = currentSum - root->data;
        return 0;
    }

    findPathSum(root->left, sum);
    findPathSum(root->right, sum);
}

int main()
{
    int *store = new int[20];
    int *hash = new int[20];
    Node *root = NULL;
    insertNode(root, 10);
    insertNode(root, 5);
    insertNode(root, 3);
    insertNode(root, 8);
    insertNode(root, 20);
    insertNode(root, 15);
    insertNode(root, 30);
    // verticalSum(root, 0, hash, store);
    // cout << leafNodes(root);
    // cout << heightOfTree(root) << '\n';
    cout << findPathSum(root, 60) << '\n';
}