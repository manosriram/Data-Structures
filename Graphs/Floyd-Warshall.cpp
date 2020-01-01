#include <iostream>
#define INF INT_MAX
using namespace std;
int dist[64][64], adj[64][64];

void setDistances(int n) {
   for (int t=1;t<=n;++t) {
        for (int j=1;j<=n;++j) {
            if (t == j) dist[t][j] = 0;
            else if (adj[t][j]) dist[t][j] = adj[t][j];
            else dist[t][j] = INF;
        }
   } 
   return;
}

void Floyd(int n) {
    for (int k=1;k<=n;++k) {
        for (int t=1;t<=n;++t) {
             for (int j=1;j<=n;++j) {
                 dist[t][j] = min(dist[t][j], (dist[t][k] + dist[k][j]));
             }
        } 
    }
    return;
}

void addEdge(int src, int dest, int wt) {
    adj[src][dest] = wt;
    adj[dest][src] = wt;
}

void initGraph(int n) {
    for (int t=1;t<=n;++t) {
        for (int j=1;j<=n;++j) {
            if (t == j) adj[t][j] = 0;
            else adj[t][j] = INF;
        }
    }
    return;
}

int main() {
    int n = 5;
    initGraph(n);

    addEdge(1, 2, 5);    
    addEdge(1, 4, 9);    
    addEdge(1, 5, 1);    
    addEdge(2, 3, 2);    
    addEdge(3, 2, 2);    
    addEdge(3, 4, 7);    
    addEdge(4, 1, 9);    
    addEdge(4, 3, 7);    
    addEdge(4, 5, 2);    
    addEdge(5, 1, 1);    
    addEdge(5, 4, 2);    

    setDistances(n);
    Floyd(n);

    for (int t=1;t<=n;++t) {
        for (int j=1;j<=n;++j) {
            cout << dist[t][j] << " ";
        }
        cout << "\n";
    }

}

