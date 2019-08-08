#include <iostream>
#include "basicTreeTemplate.h"
using namespace std;

BNode *mergeTrees(BNode *root1, BNode *root2) {
	if (!root1)
		return root2;
	if (!root2)
		return root1;

	root1->data += root2->data;
	root1->left = mergeTrees(root1->left, root2->left);
	root1->right = mergeTrees(root1->right, root2->right);

	return root1;
}

int main() {
	BNode *root1 = createNode(1);
	root1->left = createNode(3);
	root1->right = createNode(2);
	root1->left->left = createNode(5);

	BNode *root2 = createNode(2);
	root2->left = createNode(1);
	root2->right = createNode(3);
	root2->left->right = createNode(4);
	root2->right->right = createNode(7);


	BNode *root3 = mergeTrees(root1, root2);
	preOrderTraversalRecursive(root3);
	cout << endl;
}