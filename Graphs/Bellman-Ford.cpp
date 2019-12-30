#include "Weighted.hpp"
int *dist;

/*
    The difference between Dijkstra and Bellman Ford's Algorithm is that Bellman Ford's Algorithm works for Negative weights too, whereas Dijkstra's doesnt.

    Time Complexity: O(nm), where 'n' is the number of vertices and 'm' is the number of edges.
*/

void Bellman(Graph *g) {
    int times = (g->n) - 1;

    while (times--) {
        for (int t=1;t<=g->n;++t) {
            auto node = g->list[t];

            for (auto vtx: node) {
                if (dist[t] + vtx.second < dist[vtx.first])
                    dist[vtx.first] = dist[t] + vtx.second;
            }
        }
    }
    return;
}

int main() {
    Graph *g = new Graph(7);

    dist = new int[g->n];
    for (int t=1;t<=g->n;++t)
        dist[t] = INT_MAX/2;

    dist[1] = 0;

    g->addEdge(1, 2, 6);
    g->addEdge(1, 3, 5);
    g->addEdge(1, 4, 5);
    g->addEdge(2, 5, -1);
    g->addEdge(3, 2, -2);
    g->addEdge(3, 5, 1);
    g->addEdge(4, 3, -2);
    g->addEdge(4, 6, -1);
    g->addEdge(5, 7, 3);
    g->addEdge(6, 7, 3);

    Bellman(g);

    for (int t=1;t<=g->n;++t)
        cout << dist[t] << " ";
}

