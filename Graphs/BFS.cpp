#include <iostream>
#include <list>
using namespace std;

class Graph
{
  public:
    int V;
    list<int> *adj;

    Graph(int V)
    {
        this->V = V;
        adj = new list<int>[V];
    }

    void addEdge(int s, int v)
    {
        adj[s].push_back(v);
    }

    void BFS(int s)
    {
        bool *visited = new bool[V];

        for (int t = 0; t < V; t++)
        {
            visited[t] = false;
        }

        list<int> queue;
        list<int>::iterator i;

        visited[s] = true;
        queue.push_back(s);

        while (!queue.empty())
        {
            int fr = queue.front();
            cout << fr << " ";
            queue.pop_front();

            for (i = adj[fr].begin(); i != adj[fr].end(); i++)
            {
                if (!visited[*i])
                {
                    visited[*i] = true;
                    queue.push_back(*i);
                }
            }
        }
    }
};

int main()
{
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    g.BFS(2);
}