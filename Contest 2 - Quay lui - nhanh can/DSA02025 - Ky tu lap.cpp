#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n; 
vector<string> v;
int res = INT_MAX;
bool check[1000];

int count(string a, string b) {
	int cnt = 0;
	for (auto i : a) {
		for (auto j : b) {
			if (i == j)
				++cnt;
		}
	}
	return cnt;
}

void Try(int dem, int sum, int k) {
	for (int i = 1; i <= n; ++i) {
		if (!check[i]) {
			check[i] = true;
			if (dem == n)
				res = min(res, sum + count(v[k], v[i]));
			else if (res > sum && dem < n)
				Try(dem + 1, sum + count(v[k], v[i]), i);
			check[i] = false;
		}
	}
}

int main() {
	cin >> n;
	v.push_back("");
	for (int i = 1; i <= n; ++i) {
		string s; cin >> s;
		v.push_back(s);
	}

	Try(1, 0, 0);
	cout << res << "\n";

	return (0^_^0);
}
