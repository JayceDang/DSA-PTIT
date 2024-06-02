#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		string s; cin >> s;
		int dp[105][105];
		memset(dp, 0, sizeof dp);
		int res = 0;
		for (int i = 1; i <= n; ++i) {
			for (int j = i+1; j <= n; ++j) {
				if (s[i-1] == s[j-1]) {
					dp[i][j] = dp[i-1][j-1]+1;
					res = max(res, dp[i][j]);
				}
				else {
					dp[i][j] = 0;
				}
			}
		}
		
		cout << res << "\n";	
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

