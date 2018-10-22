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

void searchBack(int arr[], int key, int T, int count, int mid)
{
    int counter = 0;
    for (int t1 = T - 1; t1 > mid; t1--)
    {
        if (arr[t1] == key)
        {
            cout << counter << endl;
            return;
        }
        counter++;
    }
}

void searchSeq(int arr[], int key, int T, int count)
{
    int cnt = 0;
    int mid = (T - 1) / 2;
    for (int t = 0; t < count + T; t++)
    {

        if (t <= mid)
        {
            if (arr[t] == key)
            {
                cout << cnt << endl;
                break;
            }
            cnt++;
        }
        if (t > mid)
        {
            searchBack(arr, key, T, count, mid);
            return;
        }
    }
}

int main()
{

    int arr[1000], n, t, key;
    char select;
    int T;
    static int count;

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