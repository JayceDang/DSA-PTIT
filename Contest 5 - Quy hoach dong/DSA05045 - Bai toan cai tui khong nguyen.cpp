#include <bits/stdc++.h>
#define _ 0
using namespace std;

struct Knapsack {
	int val, wei;
	float x;
};

bool cmp(Knapsack a, Knapsack b) {
	return a.x > b.x;
}

int main() {
	int T; cin >> T;
	while (T--) {
		int n, k; cin >> n >> k;
		
		vector<Knapsack> v(n);
		
		for (int i = 0; i < n; ++i) {
			cin >> v[i].wei >> v[i].val;
			v[i].x = (float)v[i].wei / v[i].val;
		}
		sort(v.begin(), v.end(), cmp);
		
		int sum_val = 0; float sum_wei = 0;
		int idx = 0;
		
		for (int i = 0; i < n; ++i) {
			if (sum_val <= k) {
				sum_val += v[i].val;
				sum_wei += v[i].wei;
				idx = i;
			}
		}
		
		if (sum_val > k)sum_wei -= (float)(sum_val - k) * v[idx].x;
		
		cout << setprecision(2) << fixed << sum_wei << "\n";
	}

	return (0^_^0);
}
