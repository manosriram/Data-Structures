#include <iostream>
#include <vector>
#include "Intro.hpp"
using namespace std;

int simpleWays(vector<int> grph[], int src, int dest, int nodes, bool visited[]) {
	static int ways;
	visited[src] = true;

	if (src == dest)
		ways++;

	for (auto it = grph[src].begin(); it != grph[src].end(); it++) {
		if (!visited[*it]) {
			simpleWays(grph, *it, dest, nodes, visited);
		}
	}
	return ways;
}

int main() {
	int nodes = 9;
    vector<int> grph[10];
    bool visited[nodes];
    memset(visited, false, sizeof(visited));

    addEdge(1, 2, grph);
    addEdge(1, 3, grph);
    addEdge(2, 4, grph);
    addEdge(2, 5, grph);
    addEdge(2, 6, grph);
    addEdge(3, 7, grph);
    addEdge(7, 8, grph);
    addEdge(8, 9, grph);

    int ways = simpleWays(grph, 1, nodes-1, nodes, visited);
    cout << ways << endl;
}

