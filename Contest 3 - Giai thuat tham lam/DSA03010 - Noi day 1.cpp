#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		long long ans = 0;
		int a[n]; priority_queue<int, vector<int>, greater<int>> pq;
		
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			pq.push(a[i]);
		}
		
		while (pq.size() > 1) {
			int x = pq.top(); pq.pop();
			int y = pq.top(); pq.pop();
			pq.push(x+y);
			ans += x + y;
		}
		cout << ans << "\n";
	}

	return (0^_^0);
}
