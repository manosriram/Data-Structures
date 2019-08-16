#include <iostream>
#include <vector>
#define trace(x) cerr << #x << " " << x << '\n';
using namespace std;

int findPivot(vector<int> vt) {
	int sum = 0, total = 0;

	for (auto itr = vt.begin();itr != vt.end();itr++) {
		total += *itr;
	}
	int right;
	for (int t=0;t<vt.size();t++) {
		right = total - vt[t] - sum;

		if (right == sum)
			return t;

		sum += vt[t];
	}
	return -1;
}

int main() {
	int a[] = { 1, 7, 3, 6, 5, 6 };
	vector<int> vt(a, a + (sizeof(a)/sizeof(a[0])));

	int piv = findPivot(vt);
	cout << piv << endl;
}