#include "./BuildTree.hpp"

int main() {
    vector<int> sumArray { 1, 2, 3, 4, 5, 6 };

    vector<int> BTree = Build(sumArray, sumArray.size());

    for (int t=1;t<=BTree.size();++t)
        cout << BTree[t] << " ";
}
