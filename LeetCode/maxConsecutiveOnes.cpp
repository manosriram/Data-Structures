#include <limits.h>
#include <iostream>
using namespace std;

int maxConsecutives(int *A, int n, int k) {
    int lastOne = -1, cnt = 0, max_ = INT_MIN, i = 0, curK = k;
    int m = 1;
    while (i < n) {
        if (curK < 0) {
            if (cnt > max_)
                max_ = cnt;
            cnt = 0;
            i = lastOne + m;
            ++m;
            curK = k;
            continue;
        }
        if (A[i] == 1) {
            ++cnt;
            lastOne = i;
        } else {
            ++cnt;
            --curK;
        }
        ++i;
        cout << "Runnning.. " << endl;
    }
    cout << max_ << endl;
    return max_;
}

int main() {
    int n, k;
    cin >> n;
    int *A = new int[n];

    for (int t = 0; t < n; t++)
        cin >> A[t];

    cin >> k;

    maxConsecutives(A, n, k);
}