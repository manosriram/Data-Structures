#include <iostream>
#include <list>
using namespace std;

bool visited[10];

void dfs(int s, bool visited[], list<int> *adj)
{
    list<int>::iterator i;
    visited[s] = true;
    cout << "Visited : " << s << '\n';
    for (i = adj[s].begin(); i != adj[s].end(); i++)
    {
        if (visited[*i] == false)
        {
            dfs(*i, visited, adj);
        }
    }
    return;
}

void init(int vert)
{
    for (int t = 0; t < vert; t++)
        visited[t] = false;
}

int main()
{
    int vert, edge;
    cout << "Number of Vertices : ";
    cin >> vert;
    cout << "Number of Edges : ";
    cin >> edge;
    int s, d;

    list<int> *adj = new list<int>[vert];

    for (int t = 0; t < edge; t++)
    {
        cout << "Source and Destination Vertices : ";
        cin >> s >> d;
        adj[s].push_back(d);
    }

    init(vert);
    dfs(2, visited, adj);
}