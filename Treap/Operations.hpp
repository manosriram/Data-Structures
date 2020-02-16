#include "Includes.hpp"
#include "Structure.hpp"

#ifndef OP
#define OP

TreapNode *createNode(int key) {
    TreapNode *newNode = new TreapNode();
    newNode->left = nullptr,
    newNode->right = nullptr,
    newNode->key = key,
    newNode->priority = (rand() % 100);

    return newNode;
}

TreapNode *rotateRight(TreapNode *&y) {
    TreapNode *x = y->left, *Sub2 = x->right;

    x->right = y;
    y->left = Sub2;

    return x;
}

TreapNode *rotateLeft(TreapNode *&x) {
    TreapNode *y = x->right, *Sub2 = y->left;

    y->left = x;
    x->right = Sub2;

    return y;
}

#endif
