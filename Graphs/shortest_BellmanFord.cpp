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

    void addEdge(int s, int d)
    {
        adj[s].push_back(d);
    }

    bool shortestPath(int s, int d)
    {
        int v, w;
        int *path = new int[V + 1];
        int *dist = new int[V + 1];
        list<int> queue;
        list<int>::iterator i;

        for (int t = 0; t < V; t++)
            dist[t] = -1;

        queue.push_back(s);
        dist[s] = 0;
        int index = 0;
        while (!queue.empty())
        {
            v = queue.front();
            queue.pop_front();

            for (i = adj[v].begin(); i != adj[v].end(); i++)
            {
                if (dist[*i] == -1)
                {
                    dist[*i] = dist[v] + 1;
                    path[index] = v;
                    index++;
                    queue.push_back(*i);
                }
            }
        }
        for (int t = 0; t < index; t++)
            cout << path[t] << " ";
        return false;
    }
};

int main()
{
    Graph g(6);
    g.addEdge(1, 2);
    g.addEdge(2, 6);
    g.addEdge(1, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    g.addEdge(5, 6);
    g.shortestPath(1, 6);
}