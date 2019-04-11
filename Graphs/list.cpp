#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> *node;

    int v, ed;
    int src, dest;

    cout << "Vertices : ";
    cin >> v;
    cout << "Edges : ";
    cin >> ed;

    node = new list<int>[v];
    for (int t = 0; t < ed; t++)
    {
        cout << "Enter Source and Dest. Vertices : ";
        cin >> src >> dest;
        node[src].push_back(dest);
    }

    for (int t = 0; t < v; t++)
    {
        for (auto x : node[t])
        {
            cout << x << " ";
        }
        cout << endl;
    }
}