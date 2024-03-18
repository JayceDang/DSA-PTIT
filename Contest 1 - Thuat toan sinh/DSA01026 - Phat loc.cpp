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

bool check1() {
	if (a[1] == 0 && a[n] == 1)
		return 1;
	return 0;
}
bool check2() {
	for (int i = 1; i <= n-1; ++i) {
		if (a[i] == 0 && a[i+1] == 0)
			return 0;
	}
	return 1;
}
bool check3() {
	for (int i = 1; i <= n-3; ++i) {
		if (a[i] == 1 && a[i+1] == 1 && a[i+2] == 1 && a[i+3] == 1) {
			return 0;
		}
	}
	return 1;
}

int main() {
	cin >> n;
	ok = 1;
	init();
	vector<string> v;
	string res = "";
	while (ok) {
		if (check1() && check2() && check3()) {
			for (int i = 1; i <= n; ++i) {
				if (a[i]) {
					res += "6";
				}					
				else res += "8";
			}
			v.push_back(res); res = "";
//			cout << "\n";
		}
		next();
	}
	
	for (int i = v.size()-1; i >= 0; i--) {
		cout << v[i] << "\n";
	}
	
	return (0^_^0);
}
