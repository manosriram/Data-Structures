#include <iostream>
#include <string.h>
#define MAX_ 1000
using namespace std;
int tree[MAX_] = {0};
int lazy[MAX_] = {-1};

int diff(int st, int ed, int x) {
    return (ed - x - (st - 1));
}

void Build(string arr, int st, int ed, int treeNode) {
    if (st == ed) {
        if (arr[st] == '4')
            tree[treeNode] = 1;
        else
            tree[treeNode] = 0;

        return;
    }

    int mid = (st + ed)/2;
    Build(arr, st, mid, 2 * treeNode);
    Build(arr, mid+1, ed, (2*treeNode)+1);

    tree[treeNode] = tree[2 * treeNode] + tree[(2*treeNode)+1];
}

void lazyUpdate(string arr, int st, int ed, int qs, int qe, int treeNode) {
    if (lazy[treeNode] != -1) {
        tree[treeNode] = lazy[treeNode];

        if (st != ed) {
            tree[2*treeNode] = diff(st, ed, tree[2*treeNode]);
            tree[(2*treeNode)+1] = diff(st, ed, tree[(2*treeNode)+1]);
        }
        lazy[treeNode] = -1;
    }
    if (st > qe || ed < qs) return;

    if (st >= qs && ed <= qe) {
        tree[treeNode] = diff(st, ed, tree[treeNode]);

        if (st != ed) {
            tree[2 * treeNode] = diff(st, ed, tree[2 * treeNode]);
            tree[(2 * treeNode)+1] = diff(st, ed, tree[(2*treeNode)+1]);
        }
        return;
    }
    int mid = (st + ed)/2;
    lazyUpdate(arr, st, mid, qs, qe, 2 * treeNode);
    lazyUpdate(arr, mid+1, ed, qs, qe, (2 * treeNode)+1);

    tree[treeNode] = tree[2 * treeNode] + tree[(2*treeNode)+1];
}

int main() {
    string arr = "47447747";
    int n = arr.length();

    Build(arr, 0, n-1, 1);

    for (int t=1;t<2*n;++t)
        cout << tree[t] << " ";

    cout << endl;
    lazyUpdate(arr, 0, n-1, 1, 4, 1);

    for (int t=1;t<2*n;++t)
        cout << tree[t] << " ";
}
