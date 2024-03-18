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
				
		int a[n], b[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		for (int i = 0; i < n; ++i) {
			cin >> b[i];
		}
		vector<pair<int, int>> vp;
		for (int i = 0; i < n; ++i) {
			vp.push_back({a[i], b[i]});
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
