#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		long long n, s, k;		
		cin >> n >> s >> k;
		long long a[n+1];
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
		}
		long long sum = 0;
		for (int i = s; i >= 1; i--) {
			sum += a[i];
		}
		int idx = -1;
		for (int i = 1; i <= s; ++i) {
			if (sum <= k) {
				idx = i;
				break;
			}
			else {
				sum -= a[i];
			}
		}
		cout << idx << "\n";
	}
	
	return 0;
}
