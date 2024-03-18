#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {	
	int T; cin >> T;
	while (T--) {
		int n, k;
		cin >> n >> k;
		
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		
		sort(a, a+n, greater<int>());
		for (int i = 0; i < k; ++i)
			cout << a[i] << " ";
		cout << "\n";
	}
	
	return (0^_^0);
}

