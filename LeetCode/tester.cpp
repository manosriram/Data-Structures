#include <iostream>
using namespace std;

int main()
{
    string s;
    std::getline(std::cin, s);
    int n = s.length();
    int index = 0;
    string s1[20];
    string temp;
    for (int t = 0; t < n; t++)
    {
        if (s[t] == ' ' || t == n - 1)
        {
            temp += s[t];
            s1[index] = temp;
            temp.clear();
            index++;
            continue;
        }
        else
        {
            temp += s[t];
        }
    }
    int val=index;
    for (int t=0;t<=index/2;t++) {
        string temp;
        temp = s1[t];
        s1[t] = s1[val];
        s1[val] = temp;
        val--;
    }

    for (int t=0;t<index;t++) cout << s1[t] << " ";
}