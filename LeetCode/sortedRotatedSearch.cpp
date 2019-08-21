#include <iostream>
using namespace std;

int binSearch(int low, int high, int *a, int key) {
	int mid;
	if (low > high)
		return -1;
	
	mid = (low + high) / 2;
	
	if (a[mid] == key)
		return mid;

	if (a[low] <= a[mid]) {
		if (key >= a[low] && key <= a[mid])
			return binSearch(low, mid-1, a, key);

		return binSearch(mid+1, high, a, key);
	}

		if (key >= a[mid] && key <= a[high])
			return binSearch(mid+1, high, a, key);

		return binSearch(low, mid-1, a, key);
}

int main() {
	int n, key;
	cin >> n >> key;
	int *a = new int[n];

	for (int t=0;t<n;t++)
		cin >> a[t];

	int isPresent = binSearch(0, n-1, a, key);
	cout << isPresent << endl;
}