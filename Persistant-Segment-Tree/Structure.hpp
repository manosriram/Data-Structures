#ifndef STRCT
#define STRCT
struct Node {
    int data;
    Node *left, *right;

    Node(Node *l, Node *r, int d) {
        left = l;
        right = r;
        data = d;
    }
};

#endif
