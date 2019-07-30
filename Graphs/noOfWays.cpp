#include <iostream>
#include <vector>
#include <queue>
#include "Intro.hpp"
using namespace std;

int findWays(vector<int> grph[], bool visited[], int src, int dest)
{
    int ways = 0;

    queue<int> qt;
    qt.push(src);
    visited[src] = true;

    while (!qt.empty())
    {
        int root = qt.front();
        qt.pop();

        for (auto i = grph[root].begin(); i != grph[root].end(); i++)
        {
            if (root = dest)
                break;

            if (*i == dest)
                ways++;

            if (!visited[*i])
            {
                visited[*i] = true;
                qt.push(*i);
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

    addEdge('b', 'a', grph);
    addEdge('a', 'd', grph);
    addEdge('a', 'e', grph);
    addEdge('a', 'c', grph);
    addEdge('d', 'f', grph);
    addEdge('d', 'i', grph);
    addEdge('d', 'e', grph);
    addEdge('i', 'e', grph);
    addEdge('e', 'h', grph);
    addEdge('e', 'c', grph);
    addEdge('c', 'g', grph);

    // printGraph(grph, nodes);
    // cout << findWays(grph, visited, ) << endl;
}