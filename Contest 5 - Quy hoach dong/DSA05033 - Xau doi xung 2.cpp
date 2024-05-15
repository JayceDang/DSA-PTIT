#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		string s; cin >> s;
		
		int dp[50][50] = {0};	
		int n = s.size();
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
/*
       __                         ____
      / /___ ___  __________     / __ \____ _____  ____ _
 __  / / __ `/ / / / ___/ _ \   / / / / __ `/ __ \/ __ `/
/ /_/ / /_/ / /_/ / /__/  __/  / /_/ / /_/ / / / / /_/ /
\____/\__,_/\__, /\___/\___/  /_____/\__,_/_/ /_/\__, /
           /____/                               /____/
*/
