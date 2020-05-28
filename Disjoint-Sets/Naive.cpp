#include <iostream>
using namespace std;
static int parent[264];

void make_set(int vertex) {
    parent[vertex] = vertex;
}

// O(n) time.
int find_set(int vertex) {
    if (vertex == parent[vertex]) return vertex;

    return find_set(parent[vertex]);
}

void union_sets(int set_a, int set_b) {
    set_a = find_set(set_a);
    set_b = find_set(set_b);
    if (set_a != set_b)
        parent[set_b] = set_a;
}

int main() {
    // Create 3 different sets.
    make_set(1);
    make_set(2);
    make_set(3);

    // Union Operation bw 1 and 2.
    union_sets(1, 2);

    cout << find_set(2); // 1
}
