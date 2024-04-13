#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int c, n; cin >> c >> n;
	int a[105];
	
	int dp[105][25005] = {0};
	
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	
	for (int i = 1; i <= n; ++i) {
		for (int j = 0; j <= c; ++j) {
			dp[i][j] = dp[i-1][j];		
			if (j >= a[i])
				dp[i][j] = max(dp[i][j], dp[i-1][j-a[i]] + a[i]);
		}
	}
	cout << dp[n][c];
	
	return (0^_^0);
}
