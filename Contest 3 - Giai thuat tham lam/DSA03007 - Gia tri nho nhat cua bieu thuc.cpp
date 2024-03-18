#include <bits/stdc++.h>
#define _ 0
using namespace std;

long long Res(long long a[], long long b[], int n) {
	long long ans = 0;
	sort(a, a+n);
	sort(b, b+n, greater<int>());
	
	for (int i = 0; i < n; ++i) {
		ans += a[i]*b[i];
	}
	return ans;
}

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		long long a[n], b[n];
		
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		
		for (int i = 0; i < n; ++i) {
			cin >> b[i];
		}
		
		cout << min(Res(a, b, n), Res(b, a, n)) << "\n";	
	}

	return (0^_^0);
}
