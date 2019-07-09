#include <iostream>
#include <vector>
#include "basicTreeTemplate.h"
using namespace std;
vector <int> store, perStore;
int findPathLength(BNode *root, int target) {
    static int length = -1, minLength = INT_MAX;
    if (!root) return 0;

    length++;
    store.push_back(root->data);
    findPathLength(root->left, target-(root->data));
    findPathLength(root->right, target-(root->data));

    if (target == root->data && !root->left && !root->right) {
        if (length < minLength) {
            minLength = length;
            perStore = store;
        }
    }
    length--;
    store.pop_back();
    return (minLength == INT_MAX) ? -1 : minLength;

}

int main() {
    BNode *root = createNode(1);
    insertNode(root, 10);
    insertNode(root, 15);
    insertNode(root, 5);
    insertNode(root, 2);
    
    cout << findPathLength(root, 16) << endl;

    for (auto itr = perStore.begin(); itr != perStore.end(); itr++)
        if (itr != perStore.end() - 1)
            cout << *itr << " -> ";
        else    
            cout << *itr;
    
    cout << endl;
}