#include <iostream>
#include "Build.h"
#include "BuildHelper.h"
#include "LazyHelper.h"
using namespace std;

/*  

updateMinTreeRange(tree, qlow, qhigh, start, end, diff, treeNode);
qlow -> lower_bound range
qhigh -> higher_bound range
start -> array start
end -> array end
diff -> Value to be added to the Nodes between (qlow, qhigh).
treeNode -> Node of the tree to start updating from.

*/

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(NULL);

    int a[] = {-1, 2, 4, -3, 1, 7, 1, 3, 2, -12};
    int n = sizeof(a) / sizeof(a[0]);
    int *lazy = new int[(2 * n) + 1];

    int *tree = buildTree(a);

    buildTreeMinSum(a, tree, 0, n - 1, 1);
    printTree(tree, n);

    // updateMinTreeRange(tree, 0, 2, 0, n-1, -10, 1);
    // cout << minSubArrayQuery(tree, 0, n - 1, 0, n-1, 1) << endl;
}