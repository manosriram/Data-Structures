#include <iostream>
#include "./BaseTemplate.hpp"
using namespace std;

int main() {
    TrieNode *root = new TrieNode();
    root = createNode();
    insert("mano", root);
}