#include <iostream>
#include <list>
#include "basicTreeTemplate.h"
using namespace std;
list<int> *p = new list<int>[100];
static int level, maxm = INT_MIN;

void levelOrderTraversal(Node *root)
{
    if (!root)
        return;

    p[level].push_back(root->data);
    level++;
    if (level > maxm)
        maxm = level;
    levelOrderTraversal(root->left);
    levelOrderTraversal(root->right);
    level--;
    return;
}

int main()
{
    Node *root = NULL;
    insertNode(root, 10);
    insertNode(root, 5);
    insertNode(root, 11);
    insertNode(root, 4);
    insertNode(root, 12);
    insertNode(root, 3);

    levelOrderTraversal(root);

    list<int>::iterator i;
    for (int t = 0; t < maxm; t++)
    {
        cout << "Level " << t << " : ";
        for (i = p[t].begin(); i != p[t].end(); i++)
        {
            cout << *i << " ";
        }
        cout << endl;
    }
}