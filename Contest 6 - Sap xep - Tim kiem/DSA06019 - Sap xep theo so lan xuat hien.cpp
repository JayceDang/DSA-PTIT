#include <bits/stdc++.h>
#define _ 0
using namespace std;

bool cmp(pair<int,int> a, pair<int, int> b) {
	if (a.second == b.second)
		return a.first < b.first;
	return a.second > b.second;
}

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		int a[n];
		
		map<int, int> mp;
		
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			mp[a[i]]++;
		}
		
		vector<pair<int, int>> vp;
		vp.resize(n);
		for (int i = 0; i < n; ++i) {
			vp[i].first = a[i];
			vp[i].second = mp[a[i]];
		}
		
		sort(vp.begin(), vp.end(), cmp);
		for (auto i : vp)
			cout << i.first << " ";
		
		cout << "\n";
	}

	return (0^_^0);
}

