#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    string s, temp;
    bool done = false;
    cin >> s;
    for (int t = 0; t < s.length(); t++)
    {
        if (!done && s[t] == ' ')
            continue;

        if (s[t] != ' ')
        {
            temp += s[t];
            done = true;
            continue;
        }
        else
        {
            break;
        }
    }
    int lo = INT_MAX;

    if ()

        cout << stoi(temp) << endl;
}