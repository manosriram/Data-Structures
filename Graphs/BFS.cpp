#include "GraphStructure.hpp"
#include <queue>

void BFS(Graph *g, int root)
{
    queue<int> queue;

    // Push the Root and mark it as visited.
    queue.push(root);
    g->visited[root] = true;

    // While the Queue isn't Empty.
    while (!queue.empty())
    {
        // Pop the front element and print it.
        int frnt = queue.front();
        cout << frnt << " ";
        queue.pop();

        // For the Popped element, get the nodes they are connected to.
        for (auto t = g->list[frnt].begin(); t != g->list[frnt].end(); t++)
        {
            // Push the element into queue if-and-only-if it is not visited.
            if (!g->visited[*t])
            {
                // Mark the node as Visited and push the element into queue.
                g->visited[*t] = true;
                queue.push(*t);
            }
        }
    }
    cout << endl;
    return;
}

int main()
{
    int nodes = 5;
    Graph *g = new Graph(nodes);

    g->addEdge(0, 1);
    g->addEdge(0, 2);
    g->addEdge(1, 2);
    g->addEdge(2, 0);
    g->addEdge(2, 3);
    g->addEdge(3, 3);

    BFS(g, 2);
}
