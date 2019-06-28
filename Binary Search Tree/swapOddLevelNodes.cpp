#include <iostream>
#include "basicTreeTemplate.h"
#include <list>
using namespace std;

list<int> store;
void swapOddLevel(Node *root)
{
    static int cnt;
    if (!root)
        return;

    if (cnt % 2 != 0)
    {
        store.push_back(root->data);
    }
    cnt++;
    swapOddLevel(root->left);
    swapOddLevel(root->right);
    cnt--;
    return;
}

int main()
{
    Node *root = NULL;

    insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 35);
    insertNode(root, 55);
    insertNode(root, 60);
    insertNode(root, 66);
    insertNode(root, 59);
    insertNode(root, 10);
    insertNode(root, 23);
    insertNode(root, 90);
    insertNode(root, 88);

    swapOddLevel(root);

    list<int>::iterator i;

    // store.reverse();
    for (i = store.begin(); i != store.end(); i++)
    {
        cout << *i << " ";
    }
}