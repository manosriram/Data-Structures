class Graph {
    public:
        int n;
        bool *visited;
        vector<int> *list;

        Graph(int n) {
            this->n = n+1;
            this->visited = new bool[n];
            this->list = new vector<int>[n];

            memset(visited, false, n);
        }

        void addEdge(int src, int dest) {
            list[src].push_back(dest);
            return;
        }

        void printGraph() {
            for (int t=1;t<=n;t++) {
                cout << "Node " << t << " : ";
                for (auto edge: list[t]) {
                    cout << edge << " ";
                }
                cout << endl;
            }
        }
};


