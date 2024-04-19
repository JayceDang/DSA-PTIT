#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		long long p, q; cin >> p >> q;
		long long res;
		while (1) {
			if (q % p == 0) {
				cout << 1 << "/" << q/p; break;
			}
			else {
				res = q/p + 1;
				cout << 1 << "/" << res << " + ";
				p = p*res - q;
				q *= res;
			}
		}
		cout << "\n";	
	}
	
	return (0^_^0);
}
