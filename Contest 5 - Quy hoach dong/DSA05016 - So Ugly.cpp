#include <bits/stdc++.h>
#define _ 0
using namespace std;

int dp[1005];

int check(int a, int b) {
	while (a%b == 0)
		a /= b;
	return a;
}

bool isUgly(int n) {
	n = check(n, 2);
	n = check(n, 3);
	n = check(n, 5);
	return n == 1;
}

int Ugly(int n) {
	int cnt = 1;
	for (int i = 1; i <= 10000; ++i) {
		if (isUgly(i))
			dp[cnt++] = i;
	}
	return dp[n];
}

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		cout << Ugly(n) << "\n";	
	}

	return (0^_^0);
}

