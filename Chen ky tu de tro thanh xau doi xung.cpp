#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		string s; cin >> s;
		int n = s.size();
	    int dp[n+1][n+1];
	    int res = 0;
	    memset(dp, 0, sizeof dp);
		for (int k = 2; k <= n; ++k) {
	        for (int i = 0; i < n-k+1; ++i) {
	            int j = i+k-1;
	           	if (s[i] == s[j]) {
	           		dp[i][j] = dp[i+1][j-1];
				}
				else {
					dp[i][j] = min(dp[i][j-1], dp[i+1][j])+1;
				}
	        }
	    }
	    cout << dp[0][n-1] << "\n";	
	}

	return (0^_^0);
}
