#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t,n,k;
    string s1,s2;

    cin>>s1;
    cin>>s2;
    int length_s1 = s1.length();
    int length_s2 = s1.length();

    for (t=0;t<length_s1;t++)
    for (k=0;k<length_s2;k++) {
        if (s1[t]!=s1[k]) {
            k--;
            continue;
        }
        else {
            s1.erase (std::remove(s1.begin(), s1.end(), s1[t]), s1.end());
            s2.erase (std::remove(s2.begin(), s1.end(), s1[k]), s2.end());
            t--;
            k--;

        }
    }
    cout<<s1<<s2<<endl;
}