#include <iostream>
#include <functional>
#include <queue>
#include <vector>
using namespace std;
#include "GStruct.hpp"
int n = 7;
int minNode(int dist[], bool visited[]) {
    int minV = INT_MAX, minI;
    for (int t=1;t<=n;t++) {
        if (dist[t] < minV && !visited[t])
            minV = dist[t];minI = t;
    }
    return minI;
}

int main() {
    int dist[n];
    priority_queue<int> pq;
    memset(dist, -1, n);

    Graph *g = new Graph(7);
    g->addEdge(1, 2);
    g->addEdge(2, 3);
    g->addEdge(4, 5);
    g->addEdge(4, 1);

    g->printGraph();
     
    

}
