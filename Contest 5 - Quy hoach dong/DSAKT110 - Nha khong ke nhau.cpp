#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		int a[n], dp[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		dp[1]= a[0];
		for(int i=1; i < n; ++i){
		    dp[i+1] = max(dp[i-1]+a[i], dp[i]);
		}
		cout << dp[n] << "\n";
	}

	return (0^_^0);
}

