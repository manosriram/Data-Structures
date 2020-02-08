#include "./BuildTree.hpp"
#include "./getSum.hpp"

int main() {
    vector<int> sumArray { 3, 2, -1, 6, 5, 4, -3, 3, 7, 2, 3 };

    vector<int> BTree = Build(sumArray, sumArray.size());

    for (int t=1;t<=BTree.size();++t)
        cout << BTree[t] << " ";
}
