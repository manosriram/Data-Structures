#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template <class T>
void addEdge(T src, T dest, vector<int> grph[])
{
    grph[src - 'a'].push_back(dest);
    grph[dest - 'a'].push_back(src);
    return;
}

void printGraph(vector<int> grph[], int nde)
{
    for (int t = 0; t < nde; t++)
    {
        cout << "Vertex " << static_cast<char>(t + 97);
        for (auto nd : grph[t])
        {
            cout << " -- " << static_cast<char>(nd);
        }
        cout << endl;
    }
}