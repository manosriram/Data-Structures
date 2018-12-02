#include <iostream>
#include <vector>
using namespace std;
int type, C, K;

int main()
{
    int n, T, Q, t, a;
    vector<int> arr;
    vector<int>::iterator it1;
    cin >> n;

    for (t = 0; t < n; t++)
    {
        cin >> a;
        arr.push_back(a);
    }

    it1 = arr.end() - 1;

    cin >> Q;
    while (Q--)
    {
        int cnt, check, flag;
        cin >> type >> C;

        if (type == 1)
        {
            // arr.insert(arr.end() - 1, C);
            arr.push_back(C);
            continue;
        }

        else if (type == 2)
        {
            cnt = 0;
            check = 0;
            flag = 0;
            cin >> K;
            for (auto itr = arr.end(); itr != arr.begin(); itr--)
            {

                check++;
                if (*itr == C)
                {
                    cnt++;
                    it1--;
                }

                if (cnt == K)
                {
                    flag = 1;
                    arr.erase(it1);
                    cout << "Erased : " << *itr << " ";
                    break;
                }
            }
            if (flag)
            {
                flag = 0;
                cout << check << endl;
                continue;
            }

            else if (!flag)
                cout << -1 << endl;
        }
    }
}