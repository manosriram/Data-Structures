#include <iostream>
using namespace std;
static int parent[264], sz[264], rnk[264];

// Create a new set.
void make_set(int vertex) {
    parent[vertex] = vertex;
    sz[vertex] = 1;
    rnk[vertex] = 0;
}

// O(logN) time.
int find_set(int vertex) {
    if (vertex == parent[vertex]) return vertex;

    return parent[vertex] = find_set(parent[vertex]);
}

// Union By Size.
void union_sets_by_sz(int set_a, int set_b) {
    set_a = find_set(set_a);
    set_b = find_set(set_b);
    if (set_a != set_b) {
        if (sz[set_a] < sz[set_b]) swap(set_a, set_b);

        parent[set_b] = set_a;
        sz[set_a] += sz[set_b];
    }
}

// Union By Rank.
void union_sets_by_rank(int set_a, int set_b) {
    set_a = find_set(set_a);
    set_b = find_set(set_b);
    if (set_a != set_b) {
        if (rnk[set_a] < rnk[set_b]) swap(set_a, set_b);
        
        parent[set_b] = set_a;
        if (rnk[set_a] == rnk[set_b]) ++rnk[set_a];
    }
}

int main() {
    // Create 3 different sets.
    make_set(1);
    make_set(2);
    make_set(3);

    // Union Operation bw 1 and 2.
    union_sets_by_sz(1, 2);
    union_sets_by_rank(2, 3);

    cout << find_set(3); // 1
}

