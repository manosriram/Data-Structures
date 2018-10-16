#include <iostream>
using namespace std;

template <typename t>

class Search
{
  public:
    void searchNum(t n, t arr[], t key)
    {
        int t2;
        for (t2 = 0; t2 < n; t2++)
        {

            if (key == arr[t2])
                cout << "Key Found at Position " << t2 + 1 << '\n';

            else
                continue;
        }
    }

    void getArr(t n, t arr[])
    {
        for (int o = 0; o < n; o++)
            cin >> arr[o];
    }
};

int main()
{

    int n, arr[100], key;
    Search<int> obj;

    cin >> n;

    // for (int t2 = 0; t2 < n; t2++)
    //     cin >> arr[t2];
    obj.getArr(n, arr);

    cin >> key;

    obj.searchNum(n, arr, key);
}