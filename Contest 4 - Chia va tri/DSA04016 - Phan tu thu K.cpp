#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int m, n, k; cin >> m >> n >> k;
		
		vector<int> v;
		v.push_back(k);
		for (int i = 1; i <= m+n; ++i) {
			int x; cin >> x;
			v.push_back(x);
		}
		
		sort(v.begin(), v.end());	
		
	}

	return (0^_^0);
}

