#include <bits/stdc++.h>
using namespace std;

int n, k, a[1005], ok;

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
	if (i == 0) 
		ok = 0;	
	else 
		a[i] = 1;	
}

bool check() {
	int cnt = 0, res = 0;
	for (int i = 1; i <= n; ++i) {
		if (a[i] == 0) {
			++cnt;
		}
		else cnt = 0;
		if (cnt > k)
			return false;
		if (cnt == k) ++res;
	}
	return res == 1;
}

int main() {
	cin >> n >> k;
	ok = 1;
	init();
	vector<string> v;
	string ans = "";
	while (ok) {
		if (check()) {
			for (int i = 1; i <= n; ++i) {
				if(a[i])
					ans += "B";
				else ans += "A";
			}
			v.push_back(ans); ans = "";
		}
		next();
	}
	cout << v.size() << "\n";
	for (auto x : v)
		cout << x << "\n";
	
	return 0;
}	
