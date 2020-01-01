#include <iostream>
using namespace std;
#include "_quickFind.hpp"

int main() {
    unique_ptr<DisjointSet> ds = make_unique<DisjointSet>(6);

    ds->makeSet(1);
    ds->makeSet(2);
    ds->makeSet(3);
    ds->makeSet(4);
    
    cout << ds->find(3) << " ";
    ds->Union(3, 4);
    ds->Union(3, 1);
    cout << ds->find(4) << " ";
}
