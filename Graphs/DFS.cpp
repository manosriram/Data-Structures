#include <iostream>
#include <vector>
#include <stack>
#include <utility>
using namespace std;
vector<int> g[100];
bool visited[100] = { false };

void DFS(int x) {
    if (visited[x]) return;

    cout << x << " ";
    visited[x] = true;
    for (auto node: g[x]) {
        if (!visited[node]) DFS(node);
    }
    return;
}

void addEdge(int s, int d) {
    g[s].push_back(d);
    g[d].push_back(s);
}

int main() {
    int n = 4;

    addEdge(1, 3);
    addEdge(1, 2);
    addEdge(2, 3);
    addEdge(2, 4);

    DFS(1);
}
