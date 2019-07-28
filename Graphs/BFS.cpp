#include <iostream>
#include <queue>
#include "Intro.hpp"
using namespace std;

void BFS(vector<int> grph[], int root, bool visited[])
{
    queue<int> queue;

    // Push the Root and mark it as visited.
    queue.push(root);
    visited[root] = true;

    // While the Queue isn't Empty.
    while (!queue.empty())
    {
        // Pop the front element and print it.
        int frnt = queue.front();
        cout << frnt << " ";
        queue.pop();

        // For the Popped element, get the nodes they are connected to.
        for (auto t = grph[frnt].begin(); t != grph[frnt].end(); t++)
        {
            // Push the element into queue if-and-only-if it is not visited.
            if (!visited[*t])
            {
                // Mark the node as Visited and push the element into queue.
                visited[*t] = true;
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
    vector<int> grph[nodes];
    bool visited[nodes];
    memset(visited, false, sizeof(visited));

    addEdge(0, 1, grph);
    addEdge(0, 2, grph);
    addEdge(1, 2, grph);
    addEdge(2, 0, grph);
    addEdge(2, 3, grph);
    addEdge(3, 3, grph);
    BFS(grph, 2, visited);
}