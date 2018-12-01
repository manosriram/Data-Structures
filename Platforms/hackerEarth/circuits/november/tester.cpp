#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr;

    for (int t = 0; t < 10; t++)
        arr.push_back(t);

    for (auto itr = arr.end() - 1; itr != arr.begin(); itr--)
    {
        cout << itr;
    }
}