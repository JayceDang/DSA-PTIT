#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n, s; cin >> n >> s;
		vector<int> v;
		vector<int> dp(s+1, 0);
		dp[0] = 1;
		
		for (int i = 0; i < n; ++i) {
			int x; cin >> x;
			for (int j = s; j >= x; j--) {
				if (dp[j-x])
					dp[j] = 1;
			}
		}
		cout << (dp[s] ? "YES" : "NO") << "\n";
	}

	return (0^_^0);
}
