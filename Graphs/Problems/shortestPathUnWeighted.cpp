#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> *g;
int *dist;

void initGraph(int n) {
    g = new vector<int>[n];
    dist = new int[n];

    for (int t=1;t<=n;t++)
        dist[t] = -1;

    return;
}

void addEdge(int src, int dest) {
    g[src].push_back(dest);
    return;
}

void shortestDistance(int src) {
    int currentDist = 0;
    queue<int> q;
    q.push(src);
    dist[src] = 0;

    while (!q.empty()) {
        int cN = q.front();
        for (auto it : g[cN]) {
            if (dist[it] == -1) {
                dist[it] = dist[cN] + 1;
                q.push(it);
            }
        }
        q.pop();
    }
    return;
}

int main() {
    initGraph(32);

    addEdge(1, 4);
    addEdge(1, 2);
    addEdge(2, 4);
    addEdge(2, 5);
    addEdge(3, 1);
    addEdge(3, 6);
    addEdge(4, 6);
    addEdge(4, 7);
    addEdge(5, 7);
    addEdge(7, 6);

    shortestDistance(3);
    for (int t=1;t<=7;t++)
        cout << t << " " << dist[t] << endl;
}
