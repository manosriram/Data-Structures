#include <iostream>
#include "Intro.hpp"
using namespace std;

int getMinVertex(int nodes, bool visited[], int dist[]) {
    int min_ = INT_MAX, min_I = -1;
    for (int t=0;t<nodes;t++) {
        if (visited[t] == false && dist[t] < min_) {
                min_ = dist[t];
                min_I = t;
        }
    }
    return min_I;
}

void Dijkstra(pair<vector<int>, vector<int> > grph[], int nodes, int dist[]) {
    bool visited[nodes + 1];
    int minNode;
    
    for (int t=0;t<nodes;t++)
        visited[t] = false;

    for (int t=0;t<nodes;t++) {

        minNode = getMinVertex(nodes, visited, dist);
        visited[t] = true;
        for (int g = 0;g < grph[minNode].first.size();g++) {
            if ((dist[minNode] + grph[minNode].second[g]) > dist[grph[minNode].first[g]] && !visited[g])
                dist[grph[minNode].first[g]] = (dist[t] + grph[minNode].second[g]);

        }
    }
    
    printWeightedGraph(grph, nodes, dist);
    return;
}

int main() {
    int nodes = 6;
    int dist[10];
    dist[0] = 0;
    for (int t=1;t<6;t++)
        dist[t] = INT_MAX;

    pair <vector<int>, vector<int> > grph[nodes + 2];
    
    addWeightedEdge(0, 1, 4, grph);
    addWeightedEdge(0, 2, 2, grph);
    addWeightedEdge(1, 2, 1, grph);
    addWeightedEdge(1, 3, 5, grph);
    addWeightedEdge(2, 3, 8, grph);
    addWeightedEdge(2, 4, 10, grph);
    addWeightedEdge(3, 4, 2, grph);
    addWeightedEdge(3, 5, 6, grph);
    addWeightedEdge(4, 5, 3, grph);

    // printWeightedGraph(grph, nodes, dist);
    Dijkstra(grph, nodes, dist);
}