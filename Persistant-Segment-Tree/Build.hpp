#include "Structure.hpp"

using namespace std;
void Build(Node *N, int st, int ed) {
    if (st == ed) {
        N->data = arr[st];
        return;
    }
    int mid = (st + ed) / 2;
    N->left = new Node(nullptr, nullptr, 0);
    N->right = new Node(nullptr, nullptr, 0);

    Build(N->left, st, mid);
    Build(N->right, mid+1, ed);
    N->data = min(N->left->data, N->right->data);
}

