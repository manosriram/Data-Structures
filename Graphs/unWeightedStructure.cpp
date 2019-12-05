#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<int> g[], int src, int dest) {
    g[src].push_back(dest);

    return;
}

void showGraph(vector<int> g[]) {
   for (int t=1;t<32;t++) {
         cout << "Vertex " << t << ": ";  
      for (auto it : g[t]) {
          cout << it << " ";
      }
      cout << endl;
   }
   return;
}

int main() {
    vector<int> g[32];
    
    addEdge(g, 1, 2);
    addEdge(g, 3, 4);
    addEdge(g, 1, 3);
    addEdge(g, 2, 3);
    
    showGraph(g);
}
