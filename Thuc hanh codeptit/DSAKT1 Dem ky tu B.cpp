#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	long long f[50], dp[50];
	f[0] = 0; f[1] = 1;
	for (int i = 2; i <= 45; ++i) {
		f[i] = f[i-1] + f[i-2];
	}

	dp[0] = dp[1] = 1;
	for (int i = 2; i <= 45; ++i) {
		dp[i] = dp[i-1] + dp[i-2];
	}

	int T; cin >> T;
	while (T--) {
		int n, k;

		cin >> n >> k;
		
		long long res = 0;
		while (k > 0 && n >= 0) {
			if (k == dp[n]) {
				res += f[n];
				break;
			}
			if (k >= dp[n-1]) {
				res += f[n-1];
				k -= dp[n-1];
				n -= 2;
			}	
			else
				n -= 1;
		}
		cout << res << "\n";
	}

	return (0^_^0);
}
