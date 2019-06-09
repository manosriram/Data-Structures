#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

string LCP(vector<string> str)
{
    int ind = 0;
    string strT = "";
    int size = str[0].length();
    for (int t = 0; t < str.size(); t++)
    {
        while (size--) {
            if (str[t][ind] == str[t+1][ind]) {
                strT += str[t][ind];
                ind++;
            } else return strT;
        }
    }
    return strT;
}

int main()
{
    string temp1,temp2,temp3;
    vector<string> str;
    cin >> temp1;
    cin >> temp2;
    cin >> temp3;
    str.push_back(temp1);
    str.push_back(temp2);
    str.push_back(temp3);
    sort(str.begin(), str.end()); 
    cout << LCP(str) << endl;
}