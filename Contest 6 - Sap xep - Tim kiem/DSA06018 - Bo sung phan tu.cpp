#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		int a[n];
		map<int, bool> mp;
		int MAX = -1e3, MIN = 1e3;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			mp[a[i]] = true;
			MAX = max(a[i], MAX);
			MIN = min(a[i], MIN);
		}
		int cnt = 0;
		for (int i = MIN+1; i < MAX; ++i) {
			if (mp[i] == false)
				++cnt;
		}
		cout << cnt << "\n"; 			
	}

	return (0^_^0);
}
