#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, x;
vector<pair<int, int>> p;

bool cmp(pair<int, int> a, pair<int, int> b) {
	if (abs(x-a.first) == abs(x-b.first))
		return a.second < b.second;
	return abs(x-a.first) < abs(x-b.first);
}

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n >> x;
		p.resize(n);
		for (int i = 0; i < n; ++i) {
			cin >> p[i].first;
			p[i].second = i;
		}
		sort(p.begin(), p.end(), cmp);
		for (auto x : p) {
			cout << x.first << " ";
		}		
		cout << "\n";
	}

	return (0^_^0);
}
