#include <iostream>
#define MAX_ 1000
using namespace std;
int tree[MAX_], lazy[MAX_] = {0};

// Update using Lazy Propagation.
void lazyUpdate(int *arr, int st, int ed, int qs, int qe, int in, int diff) {
    if (lazy[in] != 0) { // If there's some update to be done.
        tree[in] += lazy[in];

        if (st != ed) { // If the node isn't a Leaf Node, then propagate the update value to it's children.
            lazy[2 * in] += diff;
            lazy[(2*in) + 1] += diff;
        }
        lazy[in] = 0;
    }
    // If out-of-range, return/
    if (st > qe || ed < qs)
        return;

    // If there's a complete overlap, then add the update value to the current node.
    if (st >= qs && ed <= qe) {
        tree[in] += diff;

        if (st != ed) { // If the node isn't a Leaf Node, then propagate the update value to it's children.
            lazy[2 * in] += diff;
            lazy[(2 * in) + 1] += diff;
        }
        return;
    }
    // If there's an Partial overlap, Recur for children.
    int mid = (st + ed)/2;
    lazyUpdate(arr, st, mid, qs, qe, 2 * in, diff);
    lazyUpdate(arr, mid+1, ed, qs, qe, (2 * in) + 1, diff);

    // Current Node value is equal to minimum of it's children's Node value.
    tree[in] = min(tree[2 * in], tree[(2 * in) + 1]);
}

int rangeQuery(int *arr, int st, int ed, int qs, int qe, int in) {
    if (st >= qs && ed <= qe)
        return tree[in];

    if (st > qe || ed < qs)
        return INT_MAX;

    int mid = (st + ed)/2;

    return min(
    rangeQuery(arr, st, mid, qs, qe, 2 * in),
    rangeQuery(arr, mid+1, ed, qs, qe, (2 * in) + 1)
    );
}

void constructTree(int *arr, int st, int ed, int ind) {
    if (st > ed)
        return;

    if (st == ed) {
        tree[ind] = arr[st];
        return;
    }

    int mid = (st + ed) / 2;
    constructTree(arr, st, mid, (2 * ind));
    constructTree(arr, mid+1, ed, (2 * ind) + 1);

    tree[ind] = min(tree[2 * ind], tree[(2 * ind) + 1]);
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    constructTree(arr, 0, n-1, 1);

    for (int t=1;t<=2*n;++t)
        cout << tree[t] << " ";

    lazyUpdate(arr, 0, n-1, 2, 3, 1, 3);
    cout << endl;

    cout << rangeQuery(arr, 0, n-1, 2, 4, 1) << endl;
}
