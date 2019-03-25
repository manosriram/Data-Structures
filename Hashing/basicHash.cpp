#include <iostream>
#include <string.h>
#define ll long long int
#define mod 119
using namespace std;

ll hashString(char s[])
{
    ll hash = 0;
    for (int t = 0; t < strlen(s); t++)
    {
        hash += (s[t]) - 'a';
    }
    return hash;
}

int main()
{
    char *st = new char[20];
    cin >> st;
    ll hashed = hashString(st);
    cout << "Hash Value of the String : " << hashed << '\n';
}