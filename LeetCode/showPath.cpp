#include <iostream>
#include <string.h>
#include <vector>
#include "basicTreeTemplate.h"
using namespace std;
vector <int> vec;

void printPath() {
    for (auto i = vec.begin(); i != vec.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
    return;
}

void findPath(Node *root)
{
    if (!root) return;

    if (!root->left && !root->right) {
        vec.push_back(root->data);
        printPath();
        vec.pop_back();
    }

    vec.push_back(root->data);
    findPath(root->left);
    findPath(root->right);
    vec.pop_back();
}

int main()
{
    Node *root = NULL;

    insertNode(root, 50);
    insertNode(root, 45);
    insertNode(root, 35);
    insertNode(root, 30);
    insertNode(root, 60);
    insertNode(root, 70);
    insertNode(root, 10);
    insertNode(root, 15);
    insertNode(root, 37);

    findPath(root);
}