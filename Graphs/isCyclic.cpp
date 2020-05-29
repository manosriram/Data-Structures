#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int visited[64] = { 0 };
vector<int> g[64];

bool dfs(int vtx) {
    if (visited[vtx] == 1) return true;

    if (visited[vtx] == 0) {
        visited[vtx] = true;
        for (auto edge: g[vtx]) {
            if (dfs(edge)) return true;
        }
    }
    visited[vtx] = 2;
    return false;
}

int main() {
    int n = 2;
    g[1].push_back(0);
    g[0].push_back(1);

    for (int t=0;t<n;++t) {
        if (dfs(t)) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 1;
}

