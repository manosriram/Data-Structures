#include <iostream>
#include <queue>
#include "Intro.hpp"
using namespace std;

void BFS(vector<int> grph[], int root, bool visited[])
{
    queue<int> queue;
    visited[root] = true;
    queue.push(root);

    while (!queue.empty())
    {
        int frnt = queue.front();
        cout << frnt << " ";
        queue.pop();

        for (auto t = grph[frnt].begin(); t != grph[frnt].end(); t++)
        {
            if (!visited[*t])
            {
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