#include <bits/stdc++.h>
#define _ 0
using namespace std;

/*
	3 10
	4 5 8
	0 1 2 3 4 5 6 8 9 10
	0 -1 -1 -1 1 1 -1 -1 1 2
*/

int main() {
	int n, s; cin >> n >> s;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}	

	int dp[s];
	dp[0] = 0;
	for (int i = 1; i <= s; ++i) {
		dp[i] = 1e9;
		for (auto c : a) {
			if (i >= c) {
				dp[i] = min(dp[i], dp[i-c]+1);
			}
		}
	}
	
	for (int i = 0; i <= s; ++i) {
		if (dp[i] == 1e9)
			dp[i] = -1;
	}
	for (auto x : dp)
		cout << x << " ";

	return (0^_^0);
}
