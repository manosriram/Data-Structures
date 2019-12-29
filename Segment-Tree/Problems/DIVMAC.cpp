/*
   Problem Link: www.codechef.com/problems/DIVMAC
   */

#include <iostream>
#define MAX_ 1000
using namespace std;
int tree[MAX_];

int leastPrimeDivisor(int n) {
    if (n % 2 == 0)
        return 2;

    for (int t=3;t*t<=n;t+=2) {
        if (n % t == 0)
            return t;
    }
    return n;
}

void Update(int st, int ed, int in) {
}

void Build(int *arr, int st, int ed, int in) {
    if (st == ed) {
        tree[in] = leastPrimeDivisor(arr[st]);
        return;
    }

    int mid = (st + ed) / 2;
    Build(arr, st, mid, 2 * in);
    Build(arr, mid + 1, ed, (2 * in) + 1);

    tree[in] = max(tree[2 * in], tree[(2 * in) + 1]);
}

int Query(int st, int ed, int qs, int qe, int in) {
    if (st > qe || ed < qs)
        return INT_MIN;
    if (st >= qs && ed <= qe)
        return tree[in];

    int mid = (st + ed) / 2;
    Query(st, mid, qs, qe, 2 * in);
    Query(mid+1, ed, qs, qe, (2 * in) + 1);

    return max(tree[2*in], tree[(2*in) + 1]);
}

void Update(int st, int ed, int qs, int qe, int in) {
    if (st > qe || ed < qs)
        return;
    if (st == ed) {
        tree[in] /= leastPrimeDivisor(tree[in]);
        return;
    } 
    int mid = (st + ed) / 2;

    Update(st, mid, qs, qe, 2 * in);
    Update(mid+1, ed, qs, qe, (2 * in) + 1);

    tree[in] = max(tree[2 * in], tree[(2 * in) + 1]);
}

int main() {
    int T, n, m;
    cin >> T;
    while (T--) {
        cin >> n >> m; 
        int a[n+1];

        for (int t=1;t<=n;t++)
            cin >> a[t];

        Build(a, 0, n-1, 1);

        int type, l, r;
        while(m--) {
            cin >> type >> l >> r;

            if (type == 0)
                Update(0, n-1, l, r, 1);
            if (type == 1)
                cout << Query(0, n-1, l, r, 1);

            cout << " ";
        }
        cout << '\n';
    }
}
