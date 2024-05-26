#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		string s; cin >> s;
		int n = s.size();
        int dp[n+1][n+1] = {0};

        for (int i = 0; i < n; ++i) {
            dp[i][i] = 1;
        }

        for (int k = 2; k <= n; ++k) {
            for (int i = 0; i < n-k+1; ++i) {
                int j = i+k-1;
                if (s[i] == s[j] && k == 2) {
                    dp[i][j] = 2;
                }
                else if (s[i] == s[j]) {
                    dp[i][j] = dp[i+1][j-1] + 2;
                }
                else {
                    dp[i][j] = max(dp[i+1][j], dp[i][j-1]);
					//dp[i][j] = 1; Lien tiep
                }
            }
        }
        cout << dp[0][n-1] << "\n";
	}

	return (0^_^0);
}