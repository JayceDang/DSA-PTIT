#include <bits/stdc++.h>
using namespace std;
#define _ 0

int a[1005], c[1005], n, V;
int dp[1005][1005];

int main() {
	int T = 1; cin >> T;
	while (T--) {
		cin >> n >> V;
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
		}
		for (int i = 1; i <= n; ++i) {
			cin >> c[i];
		}
		
		for (int i = 1; i <= n; ++i) {
			for (int j = 0; j <= V; ++j) {
				dp[i][j] = dp[i-1][j]; //khong chon vat i
				if (j >= a[i]) {
					dp[i][j] = max(dp[i-1][j-a[i]]+c[i], dp[i][j]);
				}
			}
		}
		
		cout << dp[n][V] << "\n";
	}

	return (0^_^0);
}
