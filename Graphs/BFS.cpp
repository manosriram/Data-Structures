#include <iostream>
#include "Intro.hpp"
using namespace std;

int main() {
    int nodes = 10;
    vector<int> g[nodes];

    addEdge(0, 2, g);
    addEdge(1, 4, g);
    printGraph(g, nodes);
}