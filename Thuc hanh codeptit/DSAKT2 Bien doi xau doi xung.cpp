#include <bits/stdc++.h>
#define _ 0
using namespace std;

/*	quen khong chup:<
	Cho 1 xau S (co the khong doi xung). 
	Hay dem so luong ky tu nho nhat de khi them vao S thu duoc xau doi xung
	
	1 <= s.size() <= 100
	
*/

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		string s; cin >> s;
		
		int dp[105][105];
		memset(dp, 0, sizeof dp);
		
		for (int k = 2; k <= n; ++k) {
			for (int i = 0; i < n-k+1; ++i) {
				int j = i+k-1;
				if (s[i] == s[j]) {
	                dp[i][j] = dp[i + 1][j - 1];
	            } else {
	                dp[i][j] = min(dp[i][j - 1], dp[i + 1][j]) + 1;
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

