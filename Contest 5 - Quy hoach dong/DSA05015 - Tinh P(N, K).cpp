#include <bits/stdc++.h>
using namespace std;
#define _ 0

const int mod = 1e9+7;
long long dp[1005][1005];

long long P(int n, int k) {
	for (int i = 0; i <= n; ++i) {
		for (int j = 0; j <= min(i, k); ++j) {
			if (j == 0)
				dp[i][j] = 1;
			else 
				dp[i][j] = (dp[i-1][j]%mod+ (j%mod)*(dp[i-1][j-1]%mod)) % mod;
				dp[i][j+1] = 0;
		}
	}
	return dp[n][k];
}

int main() {
    int T; cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;    
        cout << P(n, k) << "\n";
    }

    return (0^_^0);
}
