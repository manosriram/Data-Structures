#include <iostream>
#include "basicTreeTemplate.h"
#include <vector>
#include <queue>
using namespace std;

void diagnolTraversal(BNode *root) {}

int main() {
	BNode *root = createNode(1);
	root->left = createNode(2);
	root->right = createNode(3);
	root->left->left = createNode(4);
	root->left->right = createNode(5);
	root->right->left = createNode(6);
	root->right->right = createNode(7);

	diagnolTraversal(root);
}
