#include <iostream>
using namespace std;

int findTrack(int n, int AT[])
{
    int k;
    int min = AT[0];
    for (k = 0; k < n; k++)
    {
        if (AT[k] < min)
            min = AT[k];
    }
    return min;
}

int main()
{
    int n;
    float n1;
    cin >> n;
    n1 = n;

    int *AT = new int[n];
    int *BT = new int[n];
    int *CT = new int[n];
    float *WT = new float[n];
    float *TAT = new float[n];
    int *Flag = new int[n];
    int *process = new int[n];

    int u;
    int t, min, ind, track;
    float AWT, ATAT;

    for (t = 0; t < n; t++)
    {
        cin >> AT[t] >> BT[t];
        Flag[t] = 0;
        process[t] = t + 1;
    }

    track = findTrack(n, AT);

    for (u = 0; u < n; u++)
    {
        min = INT_MAX;
        for (t = 0; t < n; t++)
        {
            if (!Flag[t])
            {
                if (AT[t] <= track)
                {
                    if (BT[t] < min)
                    {
                        min = BT[t];
                        ind = t;
                    }
                }
            }
        }
        Flag[ind] = 1;
        track += BT[ind];
        CT[ind] = track;
    }
    float WtSum = 0, TatSum = 0;
    for (t = 0; t < n; t++)
    {
        TAT[t] = CT[t] - AT[t];
        WT[t] = TAT[t] - BT[t];
        WtSum += WT[t];
        TatSum += TAT[t];
    }

    AWT = WtSum / n1;
    ATAT = TatSum / n1;

    cout << endl;
    cout << endl;
    cout << "Process ID" << '\t' << "A.T" << '\t' << "B.T" << '\t' << "C.T" << '\t' << "W.T" << '\t' << "T.A.T" << '\t' << endl;
    for (t = 0; t < n; t++)
    {
        cout << process[t] << '\t' << '\t' << AT[t] << "\t" << BT[t] << '\t' << CT[t] << '\t' << WT[t] << '\t' << TAT[t] << '\t' << endl;
    }
    cout << endl;
    cout << "Average Waiting Time : " << AWT << endl;
    cout << "Average Turn-Around-Time : " << ATAT << endl;
    cout << endl;
}