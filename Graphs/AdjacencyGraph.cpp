#include <iostream>
#define ll long long int;
using namespace std;

struct Graph
{
    int V;
    int E;
    int adj[100][100];
};

int main()
{
    struct Graph *G = (struct Graph *)malloc(sizeof(struct Graph));

    cout << "Enter Number of Vertices : ";
    cin >> G->V;
    cout << "Enter number of Edges : ";
    cin >> G->E;
    for (int t = 0; t < G->V; t++)
    {
        for (int j = 0; j < G->V; j++)
        {
            G->adj[t][j] = 0;
        }
    }
    int source, dest;

    for (int k = 0; k < G->E; k++)
    {
        cout << "Enter Source and Destination Vertex : ";
        cin >> source >> dest;

        G->adj[source][dest] = 1;
    }

    for (int t = 0; t < G->V; t++)
    {
        for (int j = 0; j < G->V; j++)
        {
            cout << G->adj[t][j] << " ";
        }
        cout << endl;
    }
}