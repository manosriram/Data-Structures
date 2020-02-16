#include "Includes.hpp"
#include "Structure.hpp"
#include "Operations.hpp"

#ifndef DEL
#define DEL

TreapNode *Delete(TreapNode *root, int key) {
    if (!root) return root;
    
    if (key < root->key)
        root->left = Delete(root->left, key);
    else if (key > root->key)
        root->right = Delete(root->right, key);

    else if (!root->left) {
        TreapNode *tempNode = root->right;
        delete(root);
        root = tempNode;
    } else if (!root->right) {
        TreapNode *tempNode = root->left;
        delete(root);
        root = tempNode;
    }

    else if (root->left->priority < root->right->priority) {
        root = rotateLeft(root);
        root->left = Delete(root->left, key);
    } else {
        root = rotateRight(root);
        root->right = Delete(root->right, key);
    }
    return root;
}

#endif
