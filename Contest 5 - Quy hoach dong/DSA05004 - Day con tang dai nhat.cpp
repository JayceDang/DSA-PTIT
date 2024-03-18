#include <bits/stdc++.h>
#define _ 0
using namespace std;

int a[1005], dp[1005];

int main() {
	int n; cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	int ans = 0;
	for (int i = 1; i <= n; ++i) {
		dp[i] = 1;
		for (int j = 1; j < i; ++j) {
			if (a[j] < a[i]) {
				if (dp[j]+1 > dp[i])
					dp[i] = dp[j]+1; 
			}
		}
		ans = max(ans, dp[i]);
	}
	cout << ans;
	return (0^_^0);
}
