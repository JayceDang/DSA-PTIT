#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n, x; cin >> n >> x;
		map<int, bool> mp;
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			mp[a[i]] = true;
		}
		if (mp[x])
			cout << "1\n";
		else
			cout << "-1\n";
	}

	return (0^_^0);
}

