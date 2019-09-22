#include <iostream>
using namespace std;

class BTreeNode {
    int n;
    int t;
    int *keys;
    int **children;
    bool leaf;

    public:

    void insertNonFull(int k);
    void splitChild(int i, BTreeNode *y);

    friend class BTree;
};