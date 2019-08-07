#include <iostream>
#include <vector>
#include <queue>
#include "Intro.hpp"
using namespace std;
int pathCount = 0;
vector<int> path[26];

int findWays(vector<int> grph[], bool visited[], int src, int dest)
{
    int ways = 0;

    queue<int> qt;
    qt.push(src);
    visited[src] = true;

    while (!qt.empty())
    {
        int root = qt.front();
        visited[root] = true;
        qt.pop();

        if (root == dest)
            continue;
        else
        {
            for (auto i = grph[root].begin(); i != grph[root].end(); i++)
            {
                if (*i == dest)
                    ways++;

                if (!visited[*i])
                {
                    visited[*i] = true;
                    qt.push(*i);
                }
            }
        }
    }
    return ways;
}

int main()
{
    int nodes = 9;
    vector<int> grph[26];
    bool visited[nodes];
    memset(visited, false, sizeof(visited));

    addEdge(1, 0, grph);
    addEdge(0, 3, grph);
    addEdge(0, 4, grph);
    addEdge(0, 2, grph);
    addEdge(3, 5, grph);
    addEdge(3, 8, grph);
    addEdge(3, 4, grph);
    addEdge(8, 4, grph);
    addEdge(4, 7, grph);
    addEdge(4, 2, grph);
    addEdge(2, 6, grph);

    // printGraph(grph, nodes);
    cout << findWays(grph, visited, 1, 4) << endl;
}
