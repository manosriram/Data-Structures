#include <iostream>
#include <queue>
#include <vector>
#include "basicTreeTemplate.h"
using namespace std;
vector<int> *vc = new vector<int>[30];
static int level, maxm = INT_MIN;

void boundaryTrav(BNode *root) {
    if (!root)
        return;

    vc[level].push_back(root->data);
    level++;
    if (level > maxm)
        maxm = level;

    boundaryTrav(root->left);
    boundaryTrav(root->right);
    level--;
}

int main() {
    BNode *root = createNode(20);
    root->left = createNode(8);
    root->left->left = createNode(4);
    root->left->right = createNode(12);
    root->left->right->left = createNode(10);
    root->left->right->right = createNode(14);
    root->right = createNode(22);
    root->right->right = createNode(25);

    boundaryTrav(root);

    for (int t = 0; t < maxm; t++) {
        cout << vc[t].front() << " ";
    }
    for (int t = maxm - 1; t >= 1; t--) {
        cout << vc[t].back() << " ";
    }
    cout << endl;
}