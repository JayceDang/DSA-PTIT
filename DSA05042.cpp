#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	
	int a[1005];
	int dp[1005];
	memset(dp, 0, sizeof dp);
	dp[0] = 1;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		for (int j = k; j >= a[i]; j--) {
			if (dp[j-a[i]]) {
				dp[j] = 1;
			}
			else dp[j] = 0;
		}
	}
	
	for (int i = 0; i < n; ++i) {
		cout << dp[i] << " ";
	}


	return (0^_^0);
}

