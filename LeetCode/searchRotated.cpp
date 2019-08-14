#include <iostream>
#include <vector>
using namespace std;
static int minI;
int mid, piv;

void getMin(vector<int> vt, int l, int h) {
	if (l > h)
		return;

	mid = (l + h) / 2;
	if (vt[mid] < vt[minI])
		minI = mid;

	if (vt[l] <= vt[h])
		return getMin(vt, l, mid-1);

	else
		return getMin(vt, mid+1, h);
}

template<class T>
bool binSearch(T vt, int l, int h, int tar) {

	mid = (l + h)/2;
	if (vt[mid] == tar)
		return true;

	if (l > h)
		return false;

	if (vt[mid] > tar)
		return binSearch(vt, l, mid - 1, tar);
	
	else
		return binSearch(vt, mid + 1, h, tar);
}


bool searchElement(vector<int> vt, int tar) {
	int l, h, mid_;
	l = minI;
	h = l-1;
	mid_ = 0;
	getMin(vt, 0, vt.size() - 1);

	if (tar == vt[mid_])
		return true;

	if (tar > vt[mid_])
		return binSearch(vt, mid_ + 1, h, tar);

	else
		return binSearch(vt, l, vt.size() - 1, tar);
}

int main() {
	int n, temp, min_, tar;
	cin >> n;
	std::vector<int> vt;

	for (int t=0;t<n;t++) {
		cin >> temp;
		vt.push_back(temp);
	}
	cin >> tar;

	minI = (n - 1)/2;
	cout << searchElement(vt, tar) << endl;
}