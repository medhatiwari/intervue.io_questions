#include "bits/stdc++.h"
using namespace std;
 
void solve() {
 
	long long n;
	cin >> n;
	long long odd = 0;
	long long even = 0;
	for (long long i=0; i<n; i++) {
		long long x;
		cin >> x;
		if (x % 2 == 0) even++;
		else odd++;
	}
	
	cout << odd * even << endl;
	
}
 
int main() {
	
	int t;
	cin >> t;
	while (t--) solve();
	
}