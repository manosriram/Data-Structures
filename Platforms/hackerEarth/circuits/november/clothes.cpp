#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, T, Q, t, a;
    vector<int> arr;
    cin >> n;

    for (t = 0; t < n; t++)
    {
        cin >> a;
        arr.push_back(a);
    }

    cin >> Q;
    int type, C, K;
    while (Q--)
    {
        int cnt = 0, check = 0, flag = 0;
        cin >> type >> C;

        if (type == 1)
        {
            arr.push_back(C);
            continue;
        }

        else if (type == 2)
        {
            cin >> K;
            for (auto itr = arr.end() - 1; itr != arr.begin(); itr--)
            {
                check++;
                if (*itr == C)
                    cnt++;

                if (cnt == K)
                {
                    flag = 1;
                    arr.erase(itr);
                    break;
                }
            }
            if (flag)
                cout << check - 1 << endl;

            if (!flag)
                cout << -1 << endl;
        }
    }
}