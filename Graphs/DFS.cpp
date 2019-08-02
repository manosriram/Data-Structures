#include <iostream>
#include <stack>
#include <vector>
#include <utility>
#include "Intro.hpp"
using namespace std;

void DFS(int vtx, bool visited[], vector<int> grph[])
{
    visited[vtx] = true;
    cout << vtx << " ";

    for (auto itr = grph[vtx].begin(); itr != grph[vtx].end(); itr++)
    {
        if (!visited[*itr])
        {
            DFS(*itr, visited, grph);
        }
    }
    return;
}

int main()
{
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

    DFS(1, visited, grph);
    cout << endl;
}