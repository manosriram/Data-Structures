#include <vector>
#include <iostream>
using namespace std;

class Graph {
    public:
        int n;
        bool *visited;
        vector<int> *list;

        Graph(int n) {
            this->n = n+1;
            this->visited = new bool[this->n];
            this->list = new vector<int>[this->n];

            memset(this->visited, false, n);
        }

        void addEdge(int src, int dest) {
            this->list[src].push_back(dest);
            return;
        }

        void printGraph() {
            for (int t=1;t<=n;t++) {
                cout << "Node " << t << " : ";
                for (auto edge: this->list[t]) {
                    cout << edge << " ";
                }
                cout << endl;
            }
            return;
        }
};


