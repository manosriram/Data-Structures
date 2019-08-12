#include <iostream>
using namespace std;

int searchMin(int *a, int n) {
	int low = 0, high = n-1;
	int mid, min_ = INT_MAX;
	while (low <= high) {
		mid = (low + high) / 2;
		if (a[mid + 1] < a[mid - 1])
			low = mid + 1;

		else
			high = mid - 1;

		if (a[mid] < min_)
			min_ = a[mid];
	}
	return min_;
}

int main() {
	int n;
	cin >> n;
	int *a = new int[n];

	for (int t=0;t<n;t++)
		cin >> a[t];

	cout << searchMin(a, n) << endl;

}