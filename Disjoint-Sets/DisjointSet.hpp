struct Node {
    int rank, value;
    shared_ptr<Node> parent;
};

class DisjointSet {
    public:
        map<int, shared_ptr<Node> > mp;
        void makeSet(int n) {
            shared_ptr<Node> nK = make_shared<Node>();
            nK->rank = 0;
            nK->value = n;
            nK->parent = nK;
            mp[n] = nK;
            return;    
        }

        shared_ptr<Node> findParentDriver(shared_ptr<Node> p) {
            if (p->parent == p)
                return p;

            findParentDriver(p->parent);
            return p->parent;
        }

        shared_ptr<Node> findParent(int n) {
            shared_ptr<Node> pt = this->mp[n];
            return findParentDriver(pt);
        }

        bool Union(int a, int b) {
            shared_ptr nodeA = mp[a];
            shared_ptr nodeB = mp[b];

            shared_ptr parentA = findParent(a);
            shared_ptr parentB = findParent(b);

            if (parentA->value == parentB->value)
                return false;

            if (parentA->rank >= parentB->rank) {
                parentB->parent = parentA;
                parentB->rank = (parentA->rank == parentB->rank) ? (parentB->rank + 1) : parentB->rank;
            } else {
                parentA->parent = parentB;
            }
            return true;
        }
};

