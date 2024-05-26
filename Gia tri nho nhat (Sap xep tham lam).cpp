#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	
	vector<long long> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	sort(a.begin(), a.end());
	
	long long res = 0;
	int idx = 0;
	for (int i = 0; i < k; ++i) {
		long long x = a[idx];
		for (int j = 1; j < n/k; ++j) {
			res += a[idx+1]-x;
			x = a[idx+1];
			++idx;
		}
		++idx;
	}
	cout << res << "\n";

	return (0^_^0);
}

