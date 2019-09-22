#include <iostream>
using namespace std;

class BTreeNode {
    int n;
    int t;
    int *keys;
    BTreeNode **children;
    bool leaf;

   public:
    BTreeNode(int _t, bool leaf);
    void insertNonFull(int k);
    void splitChild(int i, BTreeNode *y);
    void Traverse();

    friend class BTree;
};