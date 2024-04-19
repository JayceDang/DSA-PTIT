#include <bits/stdc++.h>
#define _ 0
using namespace std;

int minSquare(int &n) {
	vector<int> dp(10001, 0);
	dp[0] = 0;
	for (int i = 1; i <= n; i++) dp[i] = INT_MAX;
	for (int i = 1; i <= sqrt(n); ++i) {
		dp[i*i] = 1;
		for (int j = 1; j <= n; ++j) {
			if (j - i*i >= 0) {
				dp[j] = min(dp[j], dp[j - i*i]+1);
			}
		}
	}

	return dp[n];
}

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		cout << minSquare(n) << "\n";
	}

	return (0^_^0);
}