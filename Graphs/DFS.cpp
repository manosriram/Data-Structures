#include <iostream>
#include <list>
using namespace std;

bool visited[10];
list<int> *adj = new list<int>[5];

void addEdge(int s, int d)
{
    adj[s].push_back(d);
}

void DFS(int s, list<int> *adj)
{
    list<int>::iterator i;

    cout << s << " ";
    visited[s] = true;

    for (i = adj[s].begin(); i != adj[s].end(); i++)
    {
        if (!visited[*i])
        {
            DFS(*i, adj);
        }
    }
}

void init(int vert)
{
    int t;
    for (t = 0; t < vert; t++)
        visited[t] = false;

    DFS(vert, adj);
}

int main()
{
    int v, e, s, d;

    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 2);
    addEdge(2, 0);
    addEdge(2, 3);
    addEdge(3, 3);

    cout << "DFS Order : ";
    init(2);
    cout << endl;
}