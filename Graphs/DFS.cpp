#include "GraphStructure.hpp"
#include <stack>
#include <utility>

void DFS(int vtx, Graph *g)
{
    g->visited[vtx] = true;
    cout << vtx << " ";

    for (auto itr = g->list[vtx].begin(); itr != g->list[vtx].end(); itr++)
    {
        if (!g->visited[*itr])
        {
            DFS(*itr, g);
        }
    }
    return;
}

int main()
{
    int nodes = 9;
    Graph *g = new Graph(nodes);

    g->addEdge(1, 2);
    g->addEdge(1, 3);
    g->addEdge(2, 4);
    g->addEdge(2, 5);
    g->addEdge(2, 6);
    g->addEdge(3, 7);
    g->addEdge(7, 8);
    g->addEdge(8, 9);

    DFS(1, g);
    cout << endl;
}
