#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		int res = 0, ans = 0;
		map<int, int> mp;
		for (int i = 0; i < n; ++i) {
			int x; cin >> x;
			int tmp = res;
			mp[x]++;
			res = max(res, mp[x]);
			if (tmp != res) {
				ans = x;
			}
		}		
		if (res > n/2)
			cout << ans << "\n";
		else cout << "NO\n";
	}

	return (0^_^0);
}
