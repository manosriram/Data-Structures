#include <iostream>
#include <vector>
#include "basicTreeTemplate.h"
using namespace std;

int secondLargest(Node *root, vector<int> &store)
{
    static int ind;
    if (!root)
        return 0;

    secondLargest(root->left, store);
    store.push_back(root->data);
    secondLargest(root->right, store);
}
int main()
{
    Node *root = NULL;
    static vector<int> store;

    insertNode(root, 50);
    insertNode(root, 60);
    insertNode(root, 55);
    insertNode(root, 40);
    insertNode(root, 20);
    insertNode(root, 30);
    secondLargest(root, store);
    cout << store[store.size() - 2] << endl;
}