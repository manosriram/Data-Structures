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
static int sumT;
int sumOfNodes(node *root)
{

    if (!root)
        return 0;

    //sumT += root -> data;
    //sum1 = sumOfNodes(root->left) + root->data;
    //sum2 = sumOfNodes(root->right) + root->data;
    return (root -> data + sumOfNodes(root->right) + sumOfNodes(root->left));
}

int main()
{

    int n, ch, counted;
    static int count;
    node *root = new node();
    while (1)
    {
        cout << "1.Insert 2.Height 3.Count Nodes 4.Exit" << endl;
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
	    
        case 4:
            exit(0);

	case 5:
	  cout << sumOfNodes(root);
	  break;
        }
    }
}
