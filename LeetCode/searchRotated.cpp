#include <iostream>
#include <vector>
using namespace std;
int mid, piv;

int getMin(vector<int> a, int low, int high) {

	if (low >= high)
		return low;

	mid = (low + high)/ 2;
	piv = a[0];

	if (a[mid] > piv)
		return getMin(a, mid+1, high);

	else
		return getMin(a, low, mid - 1);
}

int searchKey(vector<int> a, int low, int high, int tar) {
	if (low > high)
		return -1;

	if (low == high)
		return low;

	if (tar > a[mid])
		return searchKey(a, mid+1, high, tar);

	else
		return searchKey(a, low, mid - 1, tar);
}

int main() {
	int n, temp, min_;
	cin >> n;
	std::vector<int> vt;

	for (int t=0;t<n;t++) {
		cin >> temp;
		vt.push_back(temp);
	}

	min_ = getMin(vt, 0, n - 1);	

	cout << searchKey(vt, 0, n - 1, 2) << endl;
}