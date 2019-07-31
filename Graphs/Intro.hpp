#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template <class T>
void addEdge(T src, T dest, vector<int> grph[])
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