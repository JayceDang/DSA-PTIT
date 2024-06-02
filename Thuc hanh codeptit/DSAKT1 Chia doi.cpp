#include<bits/stdc++.h>
#define _ 0
using namespace std;

int n;
int nt[1001];
int res[1001];

void Make(int x, int value) {
	for (int i = 2; i <= sqrt(x); ++i) {
		while (x % i == 0) {
			nt[i] += value;
			x /= i;
		}
	}
	if (x > 1) 
		nt[x] += value;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		cin >> n;
		memset(nt, 0, sizeof nt);
		memset(res, 0, sizeof res);

		for (int i = n+1; i <= 2*n; ++i) Make(i, 1);
		for (int i = 2; i <= n+1; ++i) Make(i, -1);

		res[0] = 1;
		int idx = 1;

		for (int i = 2; i <= 2*n; ++i) {
			while (nt[i]--) {
				idx += 5;
				for (int j = 0; j < idx; ++j) res[j] *= i;
				for (int j = 1; j < idx; ++j) {
					res[j] += res[j - 1] / 10;
					res[j-1] %= 10;
				}
				while (res[idx-1] == 0) idx--;
			}
		}

		for (int i = idx - 1; i >= 0; i--) cout << res[i];
		cout << "\n";
	}

	return (0^_^0);
}
