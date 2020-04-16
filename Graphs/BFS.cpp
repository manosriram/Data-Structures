#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> g[100];
bool visited[100] = { false };

void BFS() {
    queue<int> q;
    q.push(1);
    visited[1] = true;
    while (!q.empty()) {
        int currentNode = q.front();
        cout << currentNode << " ";
        q.pop();

        for (auto node: g[currentNode]) {
            if (!visited[node]) {
                visited[node] = true;
                q.push(node);
            }
        }
    }
}

void addEdge(int s, int d) {
    g[s].push_back(d);
    g[d].push_back(s);
    return;
}

int main() {
    int n = 4;
    addEdge(1, 2);
    addEdge(1, 3);
    addEdge(2, 3);
    addEdge(2, 4);

    BFS();
}
