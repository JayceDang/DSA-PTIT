#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	//ifstream cin ("data.in");
	
	int n, w;
	cin >> n >> w;
	int a[105], b[105];
	for (int i = 1; i <= n; ++i) {
		cin >> b[i];
	}
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}

	int dp[105][105];
	memset(dp, 0, sizeof dp);	

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= w; j++) {
			if (j >= a[i]) dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - a[i]] + b[i]);
			else dp[i][j] = dp[i - 1][j];
		}
	}
	cout << dp[n][w] << "\n";
	
	int x[105] = {0};

	int tmp = dp[n][w];
	int i = n, j = w;

	while (i >= 0 && j >= 0) {
		while (tmp == dp[i - 1][j]) {
			i--;
		}
		x[i] = 1;
		tmp = tmp - b[i];
		j -= a[i];
		i--;
	}

	for (int i = 1; i <= n; i++) cout << x[i] << " ";

	return (0^_^0);
}

