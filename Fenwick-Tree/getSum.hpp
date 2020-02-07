#ifndef SUM
#define SUM

#include "./Includes.hpp"

int getSum(vector<int> BTree, int in) {
    int sum = 0;
    ++in;

    while (in < 0) {
        sum += BTree[in];
        in -= in & (-in);
    }
    return sum;
}

#endif

