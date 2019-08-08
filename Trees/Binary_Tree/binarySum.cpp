#include <iostream>
#include "basicTreeTemplate.h"
#include <queue>
#include <vector>
using namespace std;
static int sum;
vector< queue<int> > store;
queue<int> path, temp;

void printStore() {
	for (int t=0;t<store.size();t++) {
		temp = store[t];
		while (!temp.empty()) {
			cout << temp.front() << " ";
			temp.pop();
		}
		cout << endl;
	}
	return;
}

void findBinarySum(BNode *root) {
	if (!root)
		return;

	path.push(root->data);
	
	if (!root->left && !root->right)
		store.push_back(path);

	findBinarySum(root->left);
	path.pop();
	findBinarySum(root->right);
	printStore();
}


int main()
{
	BNode *root = createNode(1);
	root->left = createNode(1);
	root->right = createNode(0);
	root->left->left = createNode(0);
	root->left->right = createNode(1);
	root->right->left = createNode(1);
	root->right->right = createNode(0);

	findBinarySum(root);

	return 0;
}