#include <iostream>
using namespace std;

// static int count;

void pushFront(int arr[], int n, int count)
{
    for (int k = n; k >= 0; k--)
        arr[k] = arr[k - 1];

    count++;
    return;
}

void searchSeq(int arr[], int key, int T, int count)
{
    int cnt = 0;
    int low = 0;
    int high = T - 1;
    int mid = (low + high) / 2;
    for (int t = 0; t < count + T; t++)
    {
        if (t == mid)
            cnt = T - t - 2;

        if (t <= mid)
        {
            if (arr[t] == key)
            {
                cout << cnt << endl;
                return;
            }
            cnt++;
        }
        if (t > mid)
        {

            if (arr[t] == key)
            {
                cout << cnt << endl;
            }
            cnt--;
        }
    }
}

int main()
{

    int arr[1000], n, t, key;
    char select;
    int T;
    int count = 0;

    cin >> T;
    for (int l = 0; l < T; l++)
    {
        cin >> select >> key;

        if (select == 'L')
        {
            pushFront(arr, T, count);
            arr[0] = key;
        }
        else if (select == 'R')
        {
            arr[l] = key;
        }

        else if (select == '?')
        {
            searchSeq(arr, key, T, count);
        }
    }
}