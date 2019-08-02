#include <iostream>
#include "Intro.hpp"
using namespace std;

void Dijkstra(pair<vector<int>, vector<int> > grph[], int nodes, int dist[]) {
    
    for (int t=0;t<nodes;t++) {
        for (int j=0;j<grph[t].first.size();j++) {
            cout << "Current Node : " << char(grph[t].first[j] + 97) << endl;
            if (dist[grph[t].first[j]] > (dist[t] + grph[t].second[j]))
                dist[grph[t].first[j]] = dist[t] + grph[t].second[j];
            else
                continue;
        }
    }
   
    // printWeightedGraph(grph, nodes, dist);
    return;
}

int main() {
    int nodes = 6;
    int dist[6];
    dist[0] = 0;
    for (int t=1;t<6;t++)
        dist[t] = INT_MAX;

    pair <vector<int>, vector<int> > grph[nodes];
    
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