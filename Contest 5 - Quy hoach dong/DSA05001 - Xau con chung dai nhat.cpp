#include <bits/stdc++.h>
#define _ 0
using namespace std;
int dp[105][105];
string s, w; 

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> s >> w;
		int n = s.size(), m = s.size();	
		s = " " + s; w = " " + w;
		
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= m; ++j) {
				if (s[i] == w[j]) {
					dp[i][j] = dp[i-1][j-1]+1;
				}
				else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
		cout << dp[n][m] << "\n";	
	}

	return (0^_^0);
}
