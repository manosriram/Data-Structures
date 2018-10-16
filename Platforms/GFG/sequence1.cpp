#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n1,n2,n3;
    long long p,res;
	
	cin >> n1 >> n2 >> n3;
	p = pow(n1,n2);
	
	res = p%n3;
	
	cout << res;
	
	return 0;
	
	
}
