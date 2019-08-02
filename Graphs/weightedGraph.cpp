#include <iostream>
#include <utility>
#include <vector>
#include "Intro.hpp"
using namespace std;

int main() {
    int nodes = 4;
    pair <vector<int>, vector<int> > grph[10];
    int dist[nodes];
    memset(dist, INT_MAX, sizeof(dist));
    
    addWeightedEdge(0, 1, 5, grph);
    addWeightedEdge(1, 2, 10, grph);
    addWeightedEdge(2, 3, 15, grph);
    addWeightedEdge(2, 0, 45, grph);
    printWeightedGraph(grph, nodes);
}