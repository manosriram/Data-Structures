#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> adj[10];

    int nodes, edges;

    cout << "Number of Vertices : ";
    cin >> nodes;
    cout << "Number of Edges : ";
    cin >> edges;
    int x, y;
    for (int t = 0; t < edges; t++)
    {
        cout << "Enter Source and Destination Vertices : ";
        cin >> x >> y;
        adj[x].push_back(y);
    }

    for (int t = 1; t <= nodes; t++)
    {
        cout << "Adjacent List for Node " << t << " : ";
        for (int j = 0; j < adj[t].size(); j++)
        {
            cout << adj[t][j] << "-->";
        }
        cout << endl;
    }
}