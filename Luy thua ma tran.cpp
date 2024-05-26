#include <bits/stdc++.h>
#define _ 0
using namespace std;

long long n, k;
long long a[10][10], tmp[10][10];
const int mod = 1e9 + 7;

void Mul(long long x[10][10], long long y[10][10]) {
	long long ans[10][10];
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			long long res = 0;
			for (int k = 0; k < n; ++k) {
				res += (x[i][k]*y[k][j])%mod;
				res %= mod;
			}
			a[i][j] = res;
		}
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			a[i][j] = ans[i][j];
		}
	}
} 

void Pow(long long a[10][10], int n) {
	if (n <= 1) return;
	Pow(a, n/2);
	Mul(a, a);
	if (n & 1) 
		Mul(a, tmp);
}

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n >> k;
		
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				cin >> a[i][j];
				tmp[i][j] = a[i][j];
			}
		}
	
		Pow(a, k);
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
		cout << "\n";		
	}


	return (0^_^0);
}
