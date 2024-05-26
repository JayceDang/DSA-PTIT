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
	    for (int i = 0; i < n; ++i) {
	        dp[i][i] = 1;
	        res = 1;
	    }
	    for (int i = 0; i < n-1; ++i) {
	        if (s[i] == s[i+1]) {
	            dp[i][i+1] = 1; res = 2;
	        }
	    }
	
		for (int k = 3; k <= n; ++k) {
	        for (int i = 0; i < n-k+1; ++i) {
	            int j = i+k-1;
	            if (dp[i+1][j-1] && s[i] == s[j]) {
	                dp[i][j] = true;
	                res = k;
	            }
	        }
	    }
	    cout << res << "\n";		
	}

	return (0^_^0);
}
