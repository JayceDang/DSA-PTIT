#include <bits/stdc++.h>
#define _ 0
using namespace std;

const int mod = 1e9+7;

int main() {
	int T; cin >> T;
	while (T--) {
		long long n; cin >> n;
		long long ans = 0;
		long long a[n]; priority_queue<long long, vector<long long>, greater<int>> pq;
		
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			pq.push(a[i]);
		}
		
		while (pq.size() > 1) {
			long long x = pq.top() % mod; pq.pop();
			long long y = pq.top() % mod; pq.pop();
			pq.push((x+y)%mod);
			ans += x%mod + y%mod;
			ans %= mod;
		}
		cout << ans << "\n";
	}

	return (0^_^0);
}
