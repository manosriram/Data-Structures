#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void addEdge(int src, int dest, vector<int> grph[])
{
    grph[src].push_back(dest);
    grph[dest].push_back(src);
    return;
}

void printGraph(vector<int> grph[], int nde)
{
    for (int t = 0; t < nde; t++)
    {
        cout << "Vertex " << t;
        for (auto nd : grph[t])
        {
            cout << " -- " << nd;
        }
        cout << endl;
    }
}