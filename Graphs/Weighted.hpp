#include <iostream>
#include <vector>
using namespace std;

class Graph {
    public:
        int n;
        bool *visited;
        vector<pair<int, int> > *list;

        Graph(int n) {
            this->n = n;
            this->visited = new bool[n+1];
            this->list = new vector<pair<int, int> >[n+1];

            memset(this->visited, false, n);
        }

        void addEdge(int src, int dest, int wt) {
            this->list[src].push_back(make_pair(dest, wt));
            return;
        }

        void printGraph() {
            for (int t=1;t<=this->n;++t) {
                cout << "Node " << t << " : ";
                for (auto edge: this->list[t]) {
                    cout << "<" << edge.first << ", " << edge.second << "> ";
                }
                cout << endl;
            }
            return;
        }
};
