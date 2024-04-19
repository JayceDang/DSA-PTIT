#include <bits/stdc++.h>
#define _ 0
using namespace std;

int Ugly(int &n) {
	vector<int> dp(n);
	dp[0] = 1;
	int d2 = 0, d3 = 0, d5 = 0;
	for (int i = 0; i < n; ++i) {
		int nextUgly = min({dp[d2]*2, dp[d3]*3, dp[d5]*5});
		dp[i] = nextUgly;
		if (nextUgly == dp[d2]*2) d2++;
		if (nextUgly == dp[d3]*3) d3++;
		if (nextUgly == dp[d5]*5) d5++;
	}
	return dp[n-1]/2;
}

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		cout << Ugly(n) << "\n";
	}

	return (0^_^0);
}