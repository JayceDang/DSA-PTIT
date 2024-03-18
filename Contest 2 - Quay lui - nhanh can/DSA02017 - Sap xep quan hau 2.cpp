#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, res = 0;
bool h[11], c[11], nguoc[22], xuoi[22];
int a[11];
int x[10][10];

void Try(int i) {
	for (int j = 1; j <= n; ++j) {
		if (!h[j] && !c[j] && !nguoc[i+j-1] && !xuoi[i-j+n]) {
			a[i] = j;
			h[j] = c[j] = nguoc[i+j-1] = xuoi[i-j+n] = true;
			if (i == n) {
				int ans = 0;
				for (int k = 1; k <= 8; ++k) {
					ans += x[k][a[k]];
				}
				res = max(res, ans);
			}
			else Try(i+1);
			h[j] = c[j] = nguoc[i+j-1] = xuoi[i-j+n] = false;
		}
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		for (int i = 1; i <= 8; ++i) {
			for (int j = 1; j <= 8; ++j) {
				cin >> x[i][j];
			}
		}
		n = 8, res = 0;
		memset(h, false, sizeof h);
		memset(c, false, sizeof c);
		memset(nguoc, false, sizeof nguoc);
		memset(xuoi, false, sizeof xuoi);

		Try(1);
		cout << res << "\n";
	}

	return (0^_^0);
}
