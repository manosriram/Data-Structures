#include <iostream>
using namespace std;

int BTmin(int BT[], int Flag[], int n, int track, int t, int storeInd, int ind, int AT[])
{
    int min = BT[t];
    int k, ind;
    int cur = AT[ind];

    for (k = 0; k < n; k++)
    {
        if (!Flag[k])
        {
            if (BT[k] <= min && BT[k] == cur)
            {
                min = BT[k];
                ind = k;
            }
        }
    }
    return ind;
}

int ATmin(int AT[], int Flag[], int n, int track, int t, int BT[], int storeInd)
{
    int k, ind;
    int min = AT[t];
    int currentInd;

    for (k = 0; k < n; k++)
    {
        if (!Flag[k])
        {
            if (AT[k] <= track)
            {
                currentInd = BTmin(BT, Flag, n, track, t, storeInd, ind, AT);
                if (AT[k] <= min)
                {
                    min = AT[k];
                    ind = k;
                }
            }
        }
    }

    // return ind;
}

// Least Value of AT for track starting..
int leastAT(int AT[], int n)
{
    int k, ind;
    int min = AT[0];
    for (k = 0; k < n; k++)
    {
        if (AT[k] < min)
        {
            min = AT[k];
            ind = k;
        }
    }
    return ind;
}

int main()
{
    int n, t, i;
    cin >> n;

    int *AT = new int[n];
    int *BT = new int[n];
    int *CT = new int[n];
    int *Flag = new int[n];

    for (t = 0; t < n; t++)
    {
        cin >> AT[t] >> BT[t];
        Flag[t] = 0;
    }

    int a, track;
    int ATIndex, storeInd, currentInd;

    a = leastAT(AT, n);
    track = AT[a];
    for (t = 0; t < n; t++)
    {
        if (!Flag[t])
        {
            // cout << t << endl;
            ATIndex = ATmin(AT, Flag, n, track, t, BT, storeInd);
            storeInd = AT[ATIndex];
            cout << storeInd << endl;
            // currentInd = BTmin(BT, Flag, n, track, t, storeInd);
            // cout << currentInd << endl;

            track += BT[currentInd];
            CT[currentInd] = track;
            Flag[currentInd] = 1;
        }
        else
            continue;
    }

    for (t = 0; t < n; t++)
        cout << CT[t] << " ";
}