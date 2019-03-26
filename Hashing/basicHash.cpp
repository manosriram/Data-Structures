#include <iostream>
using namespace std;

struct hashing
{
    int value;
    int key;
};


void put(int value, hashing hash[],int n) {
    hash[value % n].value = value;
    hash[value % n].key = (value % n);
}

int get(int key, hashing hash[]) {
    return hash[key].value;
}

int main()
{
    int n;
    
    struct hashing hash[n];
    cin >> n;
    for (int t=0;t<n;t++) {
        put(t+1,hash,n);
        cout << "Inserted : " << (t+1) << endl;
    }
    int temp;
    cin >> temp;
    cout << get(temp,hash) << endl;
}