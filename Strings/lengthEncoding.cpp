#include <iostream>
#include <string>
using namespace std;

string encode(string s)
{
    int cc, t;
    string dest = "";

    for (t = 0; t < s.length() - 1; t++)
    {
        cc = 1;
        while (t < s.length() - 1 && s[t] == s[t + 1])
        {
            t++;
            cc++;
        }
        dest += s[t];
        dest += std::to_string(cc);
    }
    return dest;
}

int main()
{
    string s;
    cin >> s;
    cout << encode(s) << endl;
}