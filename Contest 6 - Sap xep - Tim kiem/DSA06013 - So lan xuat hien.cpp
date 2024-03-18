#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n, x; cin >> n >> x;
		int a[n];
		map<int, int> mp;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			mp[a[i]]++;
		}
		if (!mp[x])
			cout << "-1\n";
		else cout << mp[x] << "\n";
	}

	return (0^_^0);
}

