#include <bits/stdc++.h>
#define _ 0
using namespace std;

struct List {
	int x, y;
};

int main() {
	int n; cin >> n;
	
	List a[n+1];

	for (int i = 0; i < n; ++i) {
		cin >> a[i].x >> a[i].y;
	}
	int dp[n+1] = {0};
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		dp[i] = 1;
		for (int j = 0; j < i; ++j) {
			if (a[j].x < a[i].x && a[j].y < a[i].y) {
				dp[i] = dp[j]+1;
			}
			ans = max(ans, dp[i]);
		}
	}
	
	cout << ans << "\n";

	return (0^_^0);
}

