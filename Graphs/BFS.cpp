#include <iostream>
#include <list>
using namespace std;

bool visited[10];
void BFS(int s, list<int> *adj)
{
    list<int> queue;
    list<int>::iterator i;
    visited[s] = true;
    queue.push_back(s);

    while (!queue.empty())
    {
        int a = queue.front();
        cout << a << " ";
        queue.pop_front();

        for (i = adj[s].begin(); i != adj[s].end(); i++)
        {
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}

void init(int vert)
{
    int t;
    for (t = 0; t < vert; t++)
        visited[t] = false;
}

int main()
{
    int v, e, s, d;
    cout << "Number of Vertices : ";
    cin >> v;
    cout << "Number of Edges : ";
    cin >> e;

    list<int> *adj = new list<int>[v];
    bool *visited = new bool[v];

    for (int t = 0; t < e; t++)
    {
        cout << "Source and Destination Vertices : ";
        cin >> s >> d;
        adj[s].push_back(d);
    }
    init(v);
    BFS(0, adj);
}