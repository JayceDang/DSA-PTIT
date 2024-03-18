#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, k, ok, a[100];

void init() {
	for (int i = 1; i <= n; ++i) {
		a[i] = 0;
	}
}

void next() {
	int i = n;
	while (i >= 1 && a[i] == 1) {
		a[i] = 0;
		--i;
	}
	if (i == 0) {
		ok = 0;
	}
	else {
		a[i] = 1;
	}
}

bool check() {
	int sum = 0;
	for (int i = 1; i <= n; ++i) {
		sum += a[i];
	}
	return sum == k;
}

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n >> k;
		ok = 1;
		init();
		
		while (ok) {
			if (check()) {
				for (int i = 1; i <= n; ++i) {
					cout << a[i];
				}
				cout << "\n";
			}
			next();
		}
	}
	
	return (0^_^0);
}
