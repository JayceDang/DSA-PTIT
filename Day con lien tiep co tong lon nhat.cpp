#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	int dp[1005];
	
	for (int i = 0; i < n; ++i) cin >> a[i];
	dp[0] = a[0];
	for (int i = 1; i < n; ++i) {
		dp[i] = max(a[i], a[i]+dp[i-1]);
	}

	for (int i = 0; i < n; ++i) cout << dp[i] << " ";


	return (0^_^0);
}

