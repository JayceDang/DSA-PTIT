#include <bits/stdc++.h>
#define _ 0
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		vector<pair<int, int>> vp;
		
		for (int i = 0; i < n; ++i) {
			int x, y; cin >> x >> y;
			vp.push_back({x, y});
		}
		
		sort(vp.begin(), vp.end(), cmp);
		
		int d = 1, i = 0;
		for (int j = 1; j < n; ++j) {
			if (vp[j].first >= vp[i].second) {
				++d;
				i = j;
			}
 		}
		cout << d << "\n";
	}
	
	return (0^_^0);
}

