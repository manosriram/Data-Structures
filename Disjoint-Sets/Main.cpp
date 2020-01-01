#include <map>
#include <iostream>
using namespace std;
#include "DisjointSet.hpp"

int main() {
    DisjointSet *ds = new DisjointSet();

    ds->makeSet(1);
    ds->makeSet(2);
    ds->makeSet(3);
    ds->makeSet(4);

    ds->Union(1, 2);

    cout << ds->findParent(2).get()->value << endl;
}

