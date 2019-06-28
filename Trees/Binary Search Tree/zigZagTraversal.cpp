#include <iostream>
#include <list>
#include "basicTreeTemplate.h"
using namespace std;

list<int> *adj = new list<int>[10];
static int i;

int zigZag(Node *root)
{
    static int max = INT_MIN;
    if (!root)
        return 0;

    adj[i].push_back(root->data);
    i++;
    if (i > max)
        max = i;
    zigZag(root->left);
    zigZag(root->right);
    i--;
    return max;
}

int main()
{
    Node *root = NULL;
    insertNode(root, 100);
    insertNode(root, 200);
    insertNode(root, 250);
    insertNode(root, 150);
    insertNode(root, 50);
    insertNode(root, 20);
    insertNode(root, 75);
    insertNode(root, 10);
    insertNode(root, 30);
    insertNode(root, 60);
    insertNode(root, 125);
    insertNode(root, 175);
    insertNode(root, 225);
    insertNode(root, 300);

    int max = zigZag(root);

    list<int>::iterator itr;

    for (int t = 0; t < max; t++)
    {
        if (t % 2 != 0)
            adj[t].reverse();

        for (itr = adj[t].begin(); itr != adj[t].end(); itr++)
        {
            cout << *itr << " -- ";
        }
        cout << endl;
    }
}