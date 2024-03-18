#include <bits/stdc++.h>
#define _ 0
using namespace std;

const int mod = 1e9 + 7;

int main() {
	int T; cin >> T;
	while (T--) {
		int n, k; cin >> n >> k;
		long long dp[100005] = {0};
		
		dp[0] = dp[1] = 1;
		for (int i = 2; i <= n; ++i) {
			for (int j = 1; j <= k; ++j) {
				if (j <= i)
					dp[i] = (dp[i]+dp[i-j])%mod;
			}
		}
		cout << dp[n] << "\n";
	}

	return (0^_^0);
}
