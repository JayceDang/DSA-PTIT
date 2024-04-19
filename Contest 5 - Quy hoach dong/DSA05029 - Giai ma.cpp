#include <bits/stdc++.h>
#define _ 0
using namespace std;

int decode(string &s) {
	int n = s.size();
	if (n == 0 || s[0] == '0')
		return 0;
	vector<int> dp(n+1, 0);
	dp[0] = dp[1] = 1;

	for (int i = 2; i <= n; ++i) {
		if (s[i-1] > '0') {
			dp[i] += dp[i-1];
		}
		if (s[i-2] == '1' || (s[i-2] == '2' && s[i-1] <= '6')) {
            dp[i] += dp[i-2];
        }
	}
	return dp[n];
}

int main() {
	int T; cin >> T;
	while (T--) {
		string s; cin >> s;
		cout << decode(s) << "\n"; 
	}

	return (0^_^0);
}

