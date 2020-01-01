// Quick-Find: O(1) for Find and O(n) for Union.

class DisjointSet {
public:
    int *_set, n;

    DisjointSet(int n) {
        _set = new int[n];
        this->n = n;
    }

    void makeSet(int m) {
        _set[m] = m;
        return;
    }
    
    int find(int m) {
        return _set[m];
    }

    void Union(int a, int b) {
        int in = _set[a];
        int IN = _set[b];

        for (int t=0;t<this->n;++t) {
            if (this->_set[t] == in)
                this->_set[t] = IN;
        }
        return;
    }
};

