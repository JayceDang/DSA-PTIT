#include <bits/stdc++.h>
#define _ 0
using namespace std;

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
        int n;
        cin >> n;    
        cout << dp[n+9][n] << "\n";
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
