#include <bits/stdc++.h>
#define _ 0
using namespace std;

int best_value(string s){
	int result = 1;
	int n = s.size();
	int dp[n][n];
	memset(dp, 0, sizeof dp);
	for (int i = 0; i < n; ++i) {
		dp[i][i] = 1;
	}
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = 1;
            result = 2;
        }
    }
	for (int k = 3; k <= n; ++k) {
        for (int i = 0; i < n - k + 1; ++i) {
            int j = i + k - 1;
            if (s[i] == s[j]) {
                dp[i][j] = dp[i + 1][j - 1];
                if (dp[i][j] == 1) {
                	result = max(result, k);
				}
            }
        }
    }
	return result;
}

int main(){
	int T; cin >> T;
	while (T--){
	    string s;
		cin >> s;
		cout << best_value(s) << endl;
	}

	return (0^_^0);
}

