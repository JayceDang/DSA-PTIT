#include <bits/stdc++.h>
#define _ 0
using namespace std;

long long catalan(int n) {
	long long dp[105] = {0};
	dp[0] = dp[1] = 1;
	for (int i = 2; i <= n; ++i) {
		for (int j = 0; j < i; ++j) {
			dp[i] += dp[j]*dp[i-j-1];
		}
	}
	return dp[n];
}

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		cout << catalan(n) << "\n";	
	}

	return (0^_^0);
}
