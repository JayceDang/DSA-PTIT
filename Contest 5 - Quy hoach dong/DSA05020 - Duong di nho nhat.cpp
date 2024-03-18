#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n, m; cin >> n >> m;
		int a[n+1][m+1]; 
		long long dp[n+1][m+1];
		memset(dp, 1e6, sizeof(dp));
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= m; ++j) {
				cin >> a[i][j];
			}
		}
		
		dp[0][0] = 0;
		
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= m; ++j) {
				dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + a[i][j];
			}
		}
		cout << dp[n][m] << "\n";
	}
		
	return (0^_^0);
}
