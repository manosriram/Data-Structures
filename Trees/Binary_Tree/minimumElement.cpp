#include <iostream>
#include "basicTreeTemplate.h"
using namespace std;
int maximumElementRecursive(BNode *root) {
    
    static int minim = INT_MAX;
    if (!root) return 0;

    (root->data < minim) ? minim = root->data : NULL;

    maximumElementRecursive(root->left);
    maximumElementRecursive(root->right);

    return minim;
}

int main() {
    BNode *root = createNode(0);

    insertNode(root, 1);
    insertNode(root, 2);
    insertNode(root, 10);
    insertNode(root, -10);
    insertNode(root, 21);
    insertNode(root, 123);
    insertNode(root, 22);
    insertNode(root, 11);

    cout << maximumElementRecursive(root) << endl;
}
