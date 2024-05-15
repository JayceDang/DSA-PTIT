#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		string s; cin >> s;
		
		bool dp[1005][1005];
		memset(dp, false, sizeof dp);	
		int n = s.size(), ans = 1;
		
		for (int i = 0; i < n; ++i) {
			dp[i][i] = 1;
		}
		
		for (int i = 1; i < n-1; ++i) {
			if (s[i] == s[i+1])
				dp[i][i+1] = true;
		}
		for (int k = 3; k < n; ++k) {
			for (int i = 0; i < n-k+1; ++i) {
				int j = i+k;
				dp[i][j] = ((dp[i+1][j-1]) && s[j] == s[k]);
				if (dp[i][j])
					ans = max(ans, k);
			}
		}
		cout << ans << "\n";
	}

	return (0^_^0);
}
/*
       __                         ____
      / /___ ___  __________     / __ \____ _____  ____ _
 __  / / __ `/ / / / ___/ _ \   / / / / __ `/ __ \/ __ `/
/ /_/ / /_/ / /_/ / /__/  __/  / /_/ / /_/ / / / / /_/ /
\____/\__,_/\__, /\___/\___/  /_____/\__,_/_/ /_/\__, /
           /____/                               /____/
*/

