#include <bits/stdc++.h>
#define _ 0
using namespace std;

int dp[1005];

int main() {
	int T = 1; cin >> T;
	while (T--) {
		int n; cin >> n;
		int a[n];
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
		}
		int res = 0;
		for (int i = 1; i <= n; ++i) {
			dp[i] = a[i];
			for (int j = 1; j < i; ++j) {
				if (a[i] > a[j]) {
					if (dp[j]+a[i] > dp[i]) {
						dp[i] = dp[j]+a[i];
						res = max(res, dp[i]);
					}
				}
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
