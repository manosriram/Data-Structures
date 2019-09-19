#include "basicTreeTemplate.h"
using namespace std;

int getDistanceFromRoot(BNode *root, BNode *target, int dist) {
    static int trvDist = -1;
    if (!root) {
        return 0;
    }

    if (root == target) {
        trvDist = dist;
        return dist;
    }

    getDistanceFromRoot(root->left, target, ++dist);
    --dist;
    getDistanceFromRoot(root->right, target, ++dist);
    --dist;
    return trvDist;
}

void getNodesAtDistanceD(BNode *root, BNode *target, int d, int lvl) {
    if (!root)
        return;

    if ((lvl == d) && (root != target))
        cout << root->data << " ";

    getNodesAtDistanceD(root->left, target, d, ++lvl);
    --lvl;
    getNodesAtDistanceD(root->right, target, d, ++lvl);
    --lvl;
}

int main() {
    BNode *root = createNode(10);
    BNode *target = root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(35);
    root->left->right = createNode(38);
    root->right->left = createNode(40);
    root->right->right = createNode(47);
    root->left->left->left = createNode(50);
    root->left->right->left = createNode(44);
    root->right->left->left = createNode(60);

    getNodesAtDistanceD(target, target, 2, 0);
    int dist = getDistanceFromRoot(root, target, 0);
    getNodesAtDistanceD(root, target, (2 - dist), 0);
}