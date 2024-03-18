#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		int cnt = 0;		
		while (sqrt(n) > 1) {
			int res = sqrt(n);
			n -= res*res; ++cnt;
		}
		cout << cnt+n << "\n";	
	}
	return (0^_^0);
}
