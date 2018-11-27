#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    int t, j, S, Q;
    int count, count1;
    int a, b;

    cin >> S >> Q;
    string str[100000];

    for (t = 1; t < S + 1; t++)
    {
        cin >> str[t];
    }

    while (Q--)
    {
        cin >> a >> b;
        count = 0;
        count1 = 0;
        int l1 = str[a].length();
        int l2 = str[b].length();

        char st1[l1 + 1];
        char st2[l2 + 1];
        // char *st1 = new char[l1];
        // char *st2 = new char[l2];

        std::copy(str[a].begin(), str[a].end(), st1);
        std::copy(str[b].begin(), str[b].end(), st2);

        // for (t = 0; t < str[a].length(); t++)
        //     st1[t] = str[a][t];

        // for (t = 0; t < str[b].length(); t++)
        //     st2[t] = str[b][t];

        for (t = 0; t < l1; t++)
        {
            for (j = 0; j < l2; j++)
            {
                // if (st1[t] == st2[j])
                // {
                //     count++;
                //     break;
                // }
                // if (st1[j] == st2[t])
                // {
                //     count1++;
                //     break;
                // }
                if (st1[t] == st2[j])
                    count++;
                if (st1[j] == st2[t])
                    count1++;
            }
        }

        if (count1 == l1)
            cout << "Yes" << endl;

        if (count == l2)
            cout << "Yes" << endl;

        else
            cout << "No" << endl;
    }
}
