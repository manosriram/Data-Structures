#ifndef SUM
#define SUM

#include "./Includes.hpp"


int getSum(vector<int> BTree, int in) {
    int sum = 0;
    ++in;

    while (in > 0) {
        sum += BTree[in];
        in -= in & (-in);

    }
    return sum;
}

int getRangeSum(vector<int> BTree, int st, int ed) {
    --st;
    int left = getSum(BTree, st);
    int right = getSum(BTree, ed);

    return (right - left);
}

#endif

