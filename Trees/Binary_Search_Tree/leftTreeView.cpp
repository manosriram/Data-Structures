#include <iostream>
#include "basicTreeTemplate.h"
#define max 50
using namespace std;

int *visited = new int[max];
void printLeftView(Node *root) {
    static int level;

    if (!root) return;

    if (!visited[level]) {
        cout << root->data << " ";
        visited[level] = true;
    }

    level++;
    printLeftView(root->left);
    printLeftView(root->right);
    level--;

    return;
}

int main() {
    Node *root = nullptr;
    int i;

    for (int i=0;i<max;i++) {
        visited[i] = false;
    }

    insertNode(root, 5);
    insertNode(root, 4);
    insertNode(root, 3);
    insertNode(root, 9);
    insertNode(root, 19);
    insertNode(root, 6);
    insertNode(root, 60);

    // displayTreeInorder(root);
    printLeftView(root);
}
