#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll mod = 1e15 + 7;
void Pow_Matrix(ll F[3][3], ll M[3][3]) {
	ll dp[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			ll res = 0;
			for (int n = 0; n < 3; n++)
				res = (res + ((F[i][n] % mod) * (M[n][j] % mod) % mod)) % mod;
			dp[i][j] = res % mod;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			F[i][j] = dp[i][j];
	}
}

void Power(ll F[3][3], ll n) {
	if (n == 1)
		return;
	ll M[3][3] = {{1, 1, 1}, {1, 0, 0}, {0, 1, 0}};
	Power(F, n / 2);
	Pow_Matrix(F, F);
	if (n & 1)
		Pow_Matrix(F, M);
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		ll F[3][3] = {{1, 1, 1}, {1, 0, 0}, {0, 1, 0}};
		Power(F, n);
		cout << (4 * F[2][0] % mod + 2 * F[2][1] % mod + F[2][2] % mod - 1) % mod << "\n";
	}
	return 0;
}
