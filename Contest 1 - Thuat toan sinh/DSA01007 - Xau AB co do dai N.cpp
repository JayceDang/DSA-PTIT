#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, ok, a[100];

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

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n;
		ok = 1;
		init();
		
		while (ok) {
			for (int i = 1; i <= n; ++i) {
				if (a[i])
					cout << "B";
				else 
					cout << "A";
			}
			cout << " ";
			next();
		}
		cout << "\n";
	}
	
	return (0^_^0);
}
