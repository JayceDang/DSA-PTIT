#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		int a[n], b[n];
		
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			b[i] = a[i];
		}
		
		sort(a, a+n);
		int idx = 0, l, r;
		while (idx != n-1) {
			if (a[idx] == b[idx]) {
				++idx;
			}
			else {
				l = idx;
				idx = n-1;
				goto jump;
			}
		}
		jump:
		while (idx != 0) {
			if (a[idx] == b[idx]) {
				idx--;
			}
			else {
				r = idx;
				break;
			}
		}
		cout << l+1 << " " << r+1 << "\n";
	}
		
	return (0^_^0);
}
