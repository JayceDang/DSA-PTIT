#include <bits/stdc++.h>
#define _ 0
using namespace std;

int dp[1005][1005];

int main() {
	int T = 1; cin >> T;
	while (T--) {
		string s1, s2; cin >> s1 >> s2;	
		int n = s1.size(), m = s2.size();
		s1 = ' ' + s1; s2 = ' ' + s2;
		memset(dp, 0, sizeof dp);
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= m; ++j) {
				if (s1[i] == s2[j]) {
					dp[i][j] = dp[i-1][j-1] + 1;
				}
				else 
					dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
		cout << dp[n][m] << "\n";
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

