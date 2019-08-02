#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

void addWeightedEdge(int src, int dest, int wt, pair<vector<int>, vector<int> > grph[])
{
    grph[src].first.push_back(dest);
    grph[dest].first.push_back(src);
    grph[src].second.push_back(wt);
    grph[dest].second.push_back(wt);
    return;
}

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

void printWeightedGraph(pair<vector<int>, vector<int> > grph[], int nodes, int dist[]) {
    
    for (int t=0;t<nodes;t++) {
        cout << "Vertex " << t << " [ " << dist[t] << " ] : ";
        
        for (int j=0;j<grph[t].first.size();j++) {
            cout << "( Vtx " <<  grph[t].first[j] << ", Weight " << grph[t].second[j] << ") ";
        }
        cout << endl;
        cout << "----------------------------";
        cout << endl;
    }
}