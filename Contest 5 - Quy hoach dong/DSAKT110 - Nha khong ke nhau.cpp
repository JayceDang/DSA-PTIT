#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		int a[n+3], dp[n+3] = {};
		for (int i = 3; i <= n+2; ++i) {
			cin >> a[i];
			dp[i] = max(dp[i-2], dp[i-3])+a[i];
		}
		
		cout << max(dp[n+1], dp[n+2]) << "\n";
	}

	return (0^_^0);
}
