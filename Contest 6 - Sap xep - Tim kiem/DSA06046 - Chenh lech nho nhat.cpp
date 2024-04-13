#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}	
		int res = INT_MAX;
		sort(a, a+n);
		
		for (int i = 0; i < n-1; ++i) {
			res = min(res, a[i+1] - a[i]);
		}
		
		cout << res << "\n";
	}

	return (0^_^0);
}

