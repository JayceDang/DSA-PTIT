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
		
		sort(a, a+n);
		
		for (auto x : a)
			cout << x << " ";
		cout << "\n";
	}

	return (0^_^0);
}
