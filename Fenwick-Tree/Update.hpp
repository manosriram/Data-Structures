#ifndef UPD
#define UPD

#include "./Includes.hpp"

void updateNode(vector<int> &BTree, int in, int n, int val) {
    while (in <= n) {
        BTree[in] += val;

        in += in & (-in);
    }
}

#endif
