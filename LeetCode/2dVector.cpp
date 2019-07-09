#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<

        vector<int>

        >
        i(20);

    for (int t = 0; t < 10; t++)
    {
        i[t] = vector<int>(10);
        for (int j = 0; j < 10; j++)
        {
            i[t][j] = j + t;
            cout << i[t][j] << " ";
        }
        cout << endl;
    }
}