#include <iostream>
#include <set>
#include <math.h>
using namespace std;
set<int> *sg;

void buildTree(int a[], int st, int ed, int treeNode) {
    if (st == ed) {
        sg[treeNode].insert(a[st]);
        return;
    }

    int mid = (st + ed)/2;
    buildTree(a, st, mid, 2 * treeNode);
    buildTree(a, mid+1, ed, 2 * treeNode + 1);

    sg[treeNode].insert(sg[2 * treeNode].begin(), sg[2 * treeNode].end());
    sg[treeNode].insert(sg[2 * treeNode + 1].begin(), sg[2 * treeNode + 1].end());
}

set<int> Query(int a[], int st, int ed, int inSt, int inEd, int treeNode) {
    set<int> lf, rg, res;
    if (ed < inSt || st > inEd)
        return res;

    if (inSt <= st && inEd >= ed)
        return sg[treeNode];

    int mid = (st + ed) / 2;
    lf = Query(a, st, mid, inSt, inEd, 2 * treeNode);
    rg = Query(a, mid+1, ed, inSt, inEd, 2 * treeNode + 1);

    res.insert(lf.begin(), lf.end());
    res.insert(rg.begin(), rg.end());

    return res;
}

int QuerySolver(int a[], int st, int ed, int inSt, int inEd, int treeNode) {
    return Query(a, st, ed, inSt, inEd, treeNode).size();
}

int main() {
    int a[] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6};
    for (auto t : a)
        cout << t << " ";

    cout << endl;
    int n = sizeof(a)/sizeof(a[0]);

    int h = (int)(ceil(log2(n)));
    int sz = 2 * (int)pow(2, h) - 1;

    sg = new set<int>[sz];
    
    buildTree(a, 0, n-1, 1);
    cout << QuerySolver(a, 0, n-1, 0, 2, 1);
}

