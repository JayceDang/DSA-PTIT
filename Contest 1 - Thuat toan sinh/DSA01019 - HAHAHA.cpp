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

bool check(string s) {
	if (s[0] != 'H' || s[s.size()-1] != 'A')
		return false;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == 'H') {
			if (s[i+1] == 'H')
				return false;
		}
	}
	return true;
}  

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n;
		string ans = "";
		vector<string> v;
		ok = 1;
		init();
		
		while (ok) {
			for (int i = 1; i <= n; ++i) {
				if (a[i])
					ans += "A";
				else ans += "H";
			}
			v.push_back(ans); ans = "";
			next();
		}
		sort(v.begin(), v.end());
		for (auto x : v) {
			if (check(x))
				cout << x << "\n";
		}
		cout << "\n";
	}
	
	return (0^_^0);
}
