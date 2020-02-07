#include "./Includes.hpp"
#include "./Update.hpp"

vector<int> Build(vector<int> sumArray, int n) {
    vector<int> BTree(n);

    for (int t=1;t<=n;++t)
        BTree[t] = 0;

    for (int t=0;t<n;++t)
        updateNode(BTree, t+1, n, sumArray[t]);

    return BTree;
}

