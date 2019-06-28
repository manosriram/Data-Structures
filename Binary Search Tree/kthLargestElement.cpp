#include <iostream>
#include <vector>
#include "basicTreeTemplate.h"
using namespace std;

int kthLargest(Node *root, vector<int> &store) {
    if (!root) return 0;

    kthLargest(root->left,store);
    store.push_back(root->data);
    kthLargest(root->right,store);
}


int main() {
    Node *root = NULL;
    vector<int> store;

    insertNode(root, 50);
    insertNode(root, 60);
    insertNode(root, 55);
    insertNode(root, 40);
    insertNode(root, 20);
    insertNode(root, 30);
    int k;
    cin >> k;

    kthLargest(root,store);
    cout << "Kth Largest Element : ";
    cout << store[store.size()-k] << '\n';
}