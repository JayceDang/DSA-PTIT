#include <bits/stdc++.h>
#define _ 0
using namespace std;

int dp[105][105][105];

int main() {
	int T = 1; cin >> T;
	while (T--) {
		int a, b, c; cin >> a >> b >> c;
		string x, y, z; cin >> x >> y >> z;
		memset(dp, 0, sizeof dp);
		
		x = ' ' + x;
		y = ' ' + y;
		z = ' ' + z;
		
		for (int i = 1; i <= a; ++i) {
			for (int j = 1; j <= b; ++j) {
				for (int k = 1; k <= c; ++k) {
					if (x[i] == y[j] && y[j] == z[k]) {
						dp[i][j][k] = dp[i-1][j-1][k-1]+1;
					}
					else {
						dp[i][j][k] = max(dp[i-1][j][k], max(dp[i][j-1][k], dp[i][j][k-1]));
					}
				}
			}
		}
		cout << dp[a][b][c] << "\n";
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

