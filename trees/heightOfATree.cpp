#include <iostream>
#include "basicTree.h"
using namespace std;

int maximumNode(int a, int b)
{
    return a > b ? a : b;
}

int heightTree(node *root)
{
    if (!root)
        return -1;

    int leftTree = heightTree(root->left);
    int rightTree = heightTree(root->right);

    return maximumNode(leftTree, rightTree) + 1;
}

int countNodes(node *root, int count)
{

    if (root)
    {
        countNodes(root->left, count + 1);
        countNodes(root->right, count + 1);
        // count += 1;
    }
    return count;
}

bool areIdentical(node *root1, node *root2)
{
    if (!root1 && !root2)
        return 1;
    if (!root1 || !root2)
        return 0;

    return (root1->data == root2->data && areIdentical(root1->left, root2->left) && areIdentical(root1->right, root2->right));
}
int sum=0;
int main()
{

    int n, ch, counted;
    static int count;
    node *root = new node();
    node *root1 = new node();
    node *root2 = new node();
    insert(root1, 19);
    insert(root1, 29);
    insert(root1, 39);
    insert(root2, 19);
    insert(root2, 29);
    insert(root2, 39);
    while (1)
    {
        cout << "1.Insert 2.Height 3.Count Nodes 4.Exit 5.Identical Or Not.\n"
             << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cin >> n;
            insert(root, n);
            break;

        case 2:
            cout << heightTree(root) << endl;
            break;

        case 3:
            counted = countNodes(root, count);
            // count = 0;
            cout << counted << endl;
            break;

        case 5:
            if (areIdentical(root1, root2))
            {
                cout << "Identical" << endl;
            }
            else
            {
                cout << "Not Identical.." << endl;
            }
            break;
        
        case 6:
            sumofLeaves(root,&sum);
            cout << "Sum = " << sum << endl;
            break;
        case 4:
            exit(0);
        }
    }
}