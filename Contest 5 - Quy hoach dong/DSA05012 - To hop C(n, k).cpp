#include <bits/stdc++.h>
using namespace std;
#define _ 0

const int mod = 1e9+7;
int dp[1005][1005];

void init() {
	for (int i = 0; i < 1001; ++i) {
		for (int j = 0; j < i+1; ++j) {
			if (i == j || j == 0)
				dp[i][j] = 1;
			else 
				dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % mod;
		}
	}
}

int main() {
    int T; cin >> T;
    init();
    while (T--) {
        int n, k;
        cin >> n >> k;    
        cout << dp[n][k] << "\n";
    }

    return (0^_^0);
}
