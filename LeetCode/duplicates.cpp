#include <iostream>
#include <vector>
#include "unordered_map"
using namespace std;

vector<int> findDup(vector<int> vt, int ar[], int n) {
	unordered_map<int, vector<int> > ump;
	vector<int> temp;

	for (int t=0;t<n;t++) {
		if (ump[vt[t]].size() >= 1) {
			ump[vt[t]].push_back(vt[t]);
			temp.push_back(vt[t]);
			continue;
		} else {
			ump[vt[t]].push_back(vt[t]);
		}
		
	}
	return temp;
}

int main() {
	int ar[] = {4,3,2,7,8,2,3,1};
	int n = (sizeof(ar)/sizeof(ar[0]));
	vector<int> vt(ar, ar + n);

	vector<int> temp = findDup(vt, ar, n);

	for (auto i = temp.begin(); i != temp.end(); i++)
		cout << *i << " ";

	cout << endl;
}
