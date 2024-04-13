#include<bits/stdc++.h>
using namespace std;

int n;
int nt[1001] = {0};
int res[1001] = {0};

void PTI(int x, int value) {
	for (int i = 2; i * i <= x; i++) {
		while (x % i == 0) {
			nt[i] += value;
			x /= i;
		}
	}

	if (x > 1) nt[x] += value;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		cin >> n;

		memset(nt, 0, sizeof nt);
		memset(res, 0, sizeof res);

		for (int i = n + 1; i <= 2 * n; i++) PTI(i, 1);
		for (int i = 2; i <= n + 1; i++) PTI(i, -1);

		res[0] = 1;
		int len = 1;

		for (int i = 2; i <= 2 * n; i++) {
			while (nt[i]--) {
				len += 5;
				for (int j = 0; j < len; j++) res[j] *= i;
				for (int j = 1; j < len; j++) {
					res[j] = res[j - 1] / 10 + res[j];
					res[j - 1] %= 10;
				}
				while (res[len - 1] == 0) len--;
			}
		}

		for (int i = len - 1; i >= 0; i--) 
			cout << res[i];
		cout << endl;
	}

	return 0;
}
