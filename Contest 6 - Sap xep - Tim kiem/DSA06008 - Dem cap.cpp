#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {	
	int T; cin >> T;
	while (T--) {
		int n, m;
		cin >> n >> m;
		
		int x[n], y[m];
		double a[n], b[m];
		
		for (int i = 0; i < n; ++i)
			cin >> x[i];
		for (int i = 0; i < m; ++i)
			cin >> y[i];
		
		int cnt = 0;
		for (int i = 0; i < n; ++i) {
			a[i] = log(x[i])/x[i];
		}
		for (int i = 0; i < m; ++i) {
			b[i] = log(y[i])/y[i];
		}
		sort(a, a+n); sort(b, b+m);
		
		for (int i = n-1; i >= 0; i--) {
			for (int j = 0; j < m; ++j) {
				if (a[i] > b[j]) {
					++cnt;
				}
				else {
					continue;
				}	
			}
		}
		
		cout << cnt << "\n";
	}
	
	return (0^_^0);
}
