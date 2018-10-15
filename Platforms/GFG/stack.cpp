#include <iostream>
#include <stack>
#include <stdlib.h>


using namespace std;

stack<int> stacked;

void show() {
    while(!stacked.empty()){
        cout << stacked.top() << ' ';
        stacked.pop();
    }
}


int main() {
    
    stacked.push(123);
    stacked.push(156);
    stacked.push(12313);
    // stacked.pop();

    show();
}