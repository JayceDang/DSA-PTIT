#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n, m; cin >> n >> m;
		
		int a[n+5][m+5], dp[n+5][m+5] = {};
		
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= m; ++j) {
				cin >> a[i][j];
			}
		}
		
		int res = 0;
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= m; ++j) {
				if (a[i][j] == 0) continue;
				dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]})+1;
				res = max(res, dp[i][j]);
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

