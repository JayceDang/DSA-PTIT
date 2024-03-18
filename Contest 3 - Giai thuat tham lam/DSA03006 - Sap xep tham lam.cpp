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
		
		sort(b, b+n);
		bool ok = true;
		for (int i = 0; i < n; ++i) {
			if (a[i] != b[i] && a[i] != b[n-i-1]) {
				ok = false;
			}
			if (!ok)
				break;
		}
		if (ok)
			cout << "Yes\n";
		else 
			cout << "No\n";
	}
	
	return (0^_^0);
}
