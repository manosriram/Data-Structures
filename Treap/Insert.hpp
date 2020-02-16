#include "Includes.hpp"
#include "Structure.hpp"
#include "Operations.hpp"

#ifndef INS
#define INS

TreapNode *Insert(TreapNode *root, int key) {
    if (!root)
       return createNode(key);

    else if (root->key >= key) {
        root->left = Insert(root->left, key);

        if (root->left->priority > root->priority)
            root = rotateRight(root);
    } else {
        root->right = Insert(root->right, key);

        if (root->right->priority > root->priority)
            root = rotateLeft(root);
    }

   return root; 
}

#endif
