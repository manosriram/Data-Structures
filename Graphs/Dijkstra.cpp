#include "Weighted.hpp"
int all = false, *dist;

/*
    Dijkstra Algorithm.
    Time Complexity: O(ElogV), where 'E' is the total number of edges and 'V' is the number of vertices.

*/

// Function which gives us the Least unvisited dist[] value.
int minNode(Graph *g) {
    int min_ = INT_MAX, node, ct = 0;

    for (int t=1;t<=g->n;++t) {
        if (!g->visited[t]) {
            if (dist[t] < min_) {
                min_ = dist[t];
                node = t;
            }
        } else ++ct;
    }
    if (ct == (g->n)-1) all = true;

    return node;
}

void Dijkstra(Graph *g) {
    // Loop till every node is visited.
    while (!all) {
        int node = minNode(g); // Current Min Dist Unvisited Node.
        g->visited[node]= true; // Mark the current Node as visited.

        // Relax the current node.
        for (auto x : g->list[node]) {
            if (dist[node] + x.second < dist[x.first])
                dist[x.first] = dist[node] + x.second;
        }
    }
    return;
}

int main() {
    Graph *g = new Graph(6);
    dist = new int[10];

    // Initially, we will assume that all Nodes are at Infinite distance from root.
    for (int t=1;t<=g->n;++t)
        dist[t] = INT_MAX/2;

    // Distance between Root Node to itself is 0.
    dist[1] = 0;

    g->addEdge(1, 2, 2);
    g->addEdge(1, 3, 4);
    g->addEdge(2, 3, 1);
    g->addEdge(2, 4, 7);
    g->addEdge(3, 5, 3);
    g->addEdge(4, 6, 1);
    g->addEdge(5, 4, 2);
    g->addEdge(5, 6, 5);

    Dijkstra(g);

    for (int t=1;t<=g->n;++t)
        cout << dist[t] << " ";
}
