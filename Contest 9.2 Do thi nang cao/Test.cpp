#include <bits/stdc++.h>
using namespace std;

double cost(pair<double, double> &a, pair<double, double> &b) {
	return sqrt(pow(a.first-b.first, 2) + pow(a.second-b.second, 2))	
}

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		vector<pair<double, double>> v;
		for (int i = 1; i <= n; ++i) {
			double x, y; cin >> x >> y;
			v.push({x, y});
		}
		for (auto x : v) {
			
		}
			
	}
	
	return 0;
}
