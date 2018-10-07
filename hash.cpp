#include <iostream>
#include <map>
#include <conio.h>
using namespace std;

int main()
{
    int a[100], b, n;
    map<int, int> new_m;
    cout << "Enter key and value.. : " << '\n';
    cin >> n;

    for (int t = 0; t < n; t++)
    {
        cin >> a[t];
        new_m.insert(make_pair(a[t], 5));
    }

    int key, value;
    for (int i = 0; i < n; i++)
        cout << new_m[a[i]]++;
    //cin >> key >> value;
    //new_m.insert(make_pair(6, 7));
    //new_m.insert(make_pair(8, 9));

    // for (std::map<int, int>::iterator it = new_m.begin(); it != new_m.end(); ++it)
    //     std::cout << it->first << " ";
    // for (auto i = new_m.begin(); i != new_m.end(); i++)
    // {
    //     if (i->first == key && i->second == value)
    //     {
    //         cout << "Found" << endl;
    //         exit(0);
    //     }
    // }
    // cout << "Not Found.." << endl;
    // exit(0);

    getch();
}