#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {	
	int T; cin >> T;
	while (T--) {
		int n, m;
		cin >> n >> m;
		
		long long a[n], b[m];
		long long res_min = 1e8, res_max = -1e8;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			res_max = max(res_max, a[i]);
		}
		for (int i = 0; i < m; ++i) {
			cin >> b[i];
			res_min = min(res_min, b[i]);
		}
		cout << res_max*res_min << "\n";
	}
	
	return (0^_^0);
}
