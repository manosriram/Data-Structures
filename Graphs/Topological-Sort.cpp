#include <iostream>
#include <vector>
#include <stack>
using namespace std;
bool visited[64] = { false };
vector<int> g[64];
stack<int> ss;

/* Topological Sort is a linear ordering of all its vertices such that if H contains an edge (u, v),
 * then u appears vefire v in the ordering.
 * If a graph is cyclic, then no linear ordering is possible.
*/

bool allvisited(int vtx) {
    for (auto edges: g[vtx]) if (!visited[vtx]) return false;

    return true;
}

void dfs(int vtx) {
    visited[vtx] = true;

    for (auto edge: g[vtx]) {
        if (visited[edge]) continue;

        dfs(edge);
    }
    ss.push(vtx);
}

int main() {
    int n = 4;
    g[1].push_back(3);
    g[1].push_back(2);
    g[3].push_back(4);

    for (int t=1;t<n;++t)
        if (!visited[t]) dfs(t);

    while (!ss.empty()) {
        cout << (char) (96 + ss.top()) << " ";
        ss.pop();
    }
}

