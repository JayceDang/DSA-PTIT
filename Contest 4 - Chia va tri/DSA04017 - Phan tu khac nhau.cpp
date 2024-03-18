#include <bits/stdc++.h>
#define _ 0
#define mxN 1000007
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		long long a[n], b[n-1];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		map<long long, long long> mp;
		for (int i = 0; i < n-1; ++i) {
			cin >> b[i];
			mp[b[i]]++;
		}
		int idx = 0;
		for (int i = 0; i < n; ++i) {
			if (mp[a[i]] == 0)
				idx = i;
		}
		cout << idx+1 << "\n";
	}

	return (0^_^0);
}
