#include <bits/stdc++.h>
#define _ 0
using namespace std;

const int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int main() {
	int T = 1; cin >> T;
	while (T--) {
		int n; cin >> n;
		int cnt = 0;
		for (int i = 9; i >= 0; i--) {
			int x = n / a[i];
			cnt += x;
			n -= x*a[i];
		}
		cout << cnt << "\n";
	}

	return (0^_^0);
}
