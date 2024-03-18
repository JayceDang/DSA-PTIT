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
		sort(a, a+n); //2 3 4 5 6 8 | 0 3 4 5 7
		long long res1 = 0, res2 = 0;
		
		for (int i = 0; i < n; ++i) {
			if (i % 2 == 0) {
				res1 = res1*10 + a[i];
			}
			else {
				res2 = res2*10 + a[i];
			}
		}
		cout << res1 + res2 << "\n";	
	}

	return (0^_^0);
}
