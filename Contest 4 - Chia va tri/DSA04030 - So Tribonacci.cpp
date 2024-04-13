#include<bits/stdc++.h>
#define _ 0
using namespace std;
using ll = long long;

ll n;
ll mod = 1000000000000007;
ll M[5] = {1,3,6,12,23};

struct matrix {
	ll tribo[4][4] = {
		{1,0,0,0},
		{0,1,1,0},
		{1,1,0,1},
		{0,1,0,0}};
};
ll Mul(ll a, ll b) {
	if (b <= 1) return a%mod * b;
	ll tmp = Mul(a, b / 2);
	if (b % 2 == 0)return tmp % mod + tmp % mod;
	else return tmp % mod + tmp % mod + a % mod;
}
matrix operator*(matrix a, matrix b) {
	matrix c;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			c.tribo[i][j] = 0;
			for (int k = 0; k < 4; k++) {
				c.tribo[i][j] = c.tribo[i][j] % mod + Mul(a.tribo[i][k],b.tribo[k][j]) % mod;
				c.tribo[i][j] %= mod;
			}
		}
	}
	return c;
}
matrix Pow(matrix X, ll k) {
	if (k == 1)return X;
	matrix tmp = Pow(X, k / 2);
	if (k % 2 == 0)return tmp * tmp;
	else return tmp * tmp * X;
}
ll Tribonaci(ll n) {
	if (n <= 5) return M[n - 1];
	matrix X;
	matrix S = Pow(X, n+2);
	return S.tribo[2][0] - 1;
}
int main() {
	int t; cin >> t;	
	while (t--) {
		cin >> n;
		cout << Tribonaci(n) << "\n";
	}
	return (0^_^0);
}
