#include <iostream>
#include "basicTreeTemplate.h"
#include <vector>
using namespace std;

vector<int> v;

void countConsecutive(Node *root)
{
    if (!root)
        return;

    countConsecutive(root->left);
    v.push_back(root->data);
    countConsecutive(root->right);
    return;
}

int main()
{
    Node *root = NULL;

    insertNode(root, 50);
    insertNode(root, 40);
    insertNode(root, 39);
    insertNode(root, 41);
    insertNode(root, 42);
    insertNode(root, 43);
    insertNode(root, 60);
    insertNode(root, 55);
    insertNode(root, 70);
    insertNode(root, 71);

    countConsecutive(root);

    int count = 0, maxim = INT_MIN;
    for (int t = 0; t < v.size(); t++)
    {
        if (v[t] == v[t + 1] - 1)
        {
            count++;
            if (count > maxim)
                maxim = count;
        }
        else
            count = 0;
    }

    cout << maxim << endl;
}