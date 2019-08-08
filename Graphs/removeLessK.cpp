#include <iostream>
#include "Intro.hpp">
using namespace std;

bool removeNodeLessK(vector<int> grph[], int vtx, int *deg, bool visited[], int k)
{
    visited[vtx] = true;

    for (auto i = grph[vtx].begin(); i != grph[vtx].end(); i++)
    {
        if (deg[vtx] < k)
            deg[*i]--;

        if (!visited[*i])
        {
            if (removeNodeLessK(grph, *i, deg, visited, k))
                deg[*i]--;
        }
    }
    return (deg[vtx] < k);
}

int main()
{
    int nodes = 9;
    vector<int> grph[10];
    int deg[10];
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

    for (int t = 0; t < nodes; t++)
    {
        deg[t] = grph[t].size();
    }
}