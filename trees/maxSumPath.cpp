#include <iostream>
#include "basicTreeTemplate.h"

// Prints the path from the node to the Target node.
void getPath(Node *root, int target)
{
    if (!root)
        return;

    // If cuurent node value if lesser than target node value, print node value and then go right
    if (target > root->data)
    {
        cout << root->data << " ";
        getPath(root->right, target);
    }

    // else , print node value and then go left
    else
    {
        cout << root->data << " ";
        getPath(root->left, target);
    }
}

Node *maxSumPath(Node *root)
{
    // Varible initializations.. 'static' as we want them to be unchanged throughout the recursive tree calls.
    static Node *target;
    static int index;
    static int count, trackPathSum = INT_MIN;
    static int *path = new int[30];

    if (!root)
        return 0;

    // Storing the Data nodes in an array.
    path[index] = root->data;
    index++;

    // Increasing the sum.
    count += root->data;

    // If it is a leaf node.
    if (!root->left && !root->right)
    {
        // If the Current sum is greater than previous sum, then set this node as the target node.
        if (count > trackPathSum)
        {
            trackPathSum = count;
            target = root;
        }
    }

    maxSumPath(root->left);
    maxSumPath(root->right);

    // Decreasing the sum by the node's value when backtracking.
    count -= root->data;
    index--;

    // Return the Target Node.
    return target;
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
    insertNode(root, 5);
    insertNode(root, 40);

    // Create a Temporary Node to store the resultant node..
    Node *temp;
    temp = maxSumPath(root);

    // Shows the Path from the root to that Temp node.
    getPath(root, temp->data);
    cout << '\n';
}