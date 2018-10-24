#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int t, flag = 0;
    string str[4] = {"books", "sports", "entertainment", "code"};
    string *p;
    p = &str[0];
    string ent, str2;

    cin >> ent;

    for (t = 0; t < 4; t++)
    {
        str2 = *p;
        if (str2 == ent)
        {
            cout << "Option Available !!" << endl;
            flag = 1;
        }

        p++;
    }
    if (!flag)
        cout << "Option Not Availble!" << endl;
}