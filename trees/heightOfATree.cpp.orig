#include <iostream>
#include "basicTreeTemplate.h"
using namespace std;

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
<<<<<<< HEAD
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
=======

int main() {
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
    cout << heightOfTree(root) << endl;
}
>>>>>>> 6bfc6775bd59bd4b5658a32d9397e9dbf10a6c67
