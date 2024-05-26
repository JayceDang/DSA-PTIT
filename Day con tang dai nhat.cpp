#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int res = 1, cnt = 1;
	for (int i = 1; i < n; ++i) {
		if (a[i] > a[i-1]) {
			cnt++;	
			res = max(res, cnt);
		}
		else cnt = 1;
	}
	
	cout << res << "\n";

	return (0^_^0);
}

