#include <iostream>

using namespace std;

long long int cache[1000];

int fibo(int n) {
    cache[0] = 0;
    cache[1] = 1;

    for (int i=2;i<n+1;i++)
    cache[i] = cache[i-1] + cache[i-2];

    return cache[n];
}



int main() {
    int n;

    cin >> n;
    

    fibo(n);

    for (int t=0;t<n;t++) 
    cout << cache[t] << " ";

}