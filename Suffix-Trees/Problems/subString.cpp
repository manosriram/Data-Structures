#include "../Base.hpp"

bool isSubString(string qry, int in, SuffixTree *root) {
    if (in == qry.length())
        return true;

    int ind = qry[in] - 'a';
    if (root->branch[ind])
        return isSubString(qry, ++in, root->branch[ind]);
    else
        return false;
}
 
int main() {
    SuffixTree *root = new SuffixTree();
    Insert("banana", root);
    cout << isSubString("nt", 0, root);
}
